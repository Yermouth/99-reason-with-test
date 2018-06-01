/* 7. Flatten a nested list structure. (medium) */
type node('a) =
  | One('a)
  | Many(list(node('a))); /* my first thought */

let flatten = nested => {
  let rec to_list = (acc, list) =>
    switch list {
    | [] => acc
    | [One(x), ...t] => to_list(List.append(acc, [x]), t)
    | [Many([]), ...t] => to_list(acc, t)
    | [Many([h, ...tl]), ...t] => to_list(acc, List.concat([[h], tl, t]))
    };
  to_list([], nested);
}; /* another implementation from https://ocaml.org/learn/tutorials/99problems.html

let flatten list =
    let rec aux acc = function
      | [] -> acc
      | One x :: t -> aux (x :: acc) t
      | Many l :: t -> aux (aux acc l) t in
    List.rev (aux [] list);;
val flatten : 'a node list -> 'a list = <fun>

This function traverses the list, prepending any encountered elements
    to an accumulator, which flattens the list in inverse order. It can
    then be reversed to obtain the actual flattened list. */