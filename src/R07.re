/* 7. Flatten a nested list structure. (medium) */
type node('a) =
  | One('a)
  | Many(list(node('a)));

let flatten = list => {
  let rec fla = (acc, list) =>
    switch (list) {
    | [] => acc
    | [One(h), ...t] => fla([h, ...acc], t)
    | [Many(h), ...t] => fla(fla(acc, h), t)
    };
  List.rev(fla([], list));
};

/* my first thought */
/*
 let flatten = nested => {
   let rec to_list = (acc, list) =>
     switch (list) {
     | [] => acc
     | [One(x), ...t] => to_list(List.append(acc, [x]), t)
     | [Many([]), ...t] => to_list(acc, t)
     | [Many([h, ...tl]), ...t] => to_list(acc, List.concat([[h], tl, t]))
     };
   to_list([], nested);
 };
 */