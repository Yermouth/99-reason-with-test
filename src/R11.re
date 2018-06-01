/* 11. Modified run-length encoding. (easy)
   Modify the result of the previous problem in such a way that
   if an element has no duplicates it is simply copied into the
   result list. Only elements with duplicates are transferred
   as (N E) lists. */
type node('a) =
  | One('a)
  | Many(int, 'a);

let encode = list => {
  let transfer = (h, t) =>
    switch t {
    | [] => One(h)
    | _ => Many(List.length([h, ...t]), h)
    };
  let rec combine = (acc, list) =>
    switch (acc, list) {
    | ([], []) => []
    | ([h, ...t], []) => [transfer(h, t)]
    | ([], [h, ...t]) => combine([h], t)
    | ([h1, ...t1], [h2, ...t2]) =>
      h1 == h2 ?
        combine([h2, h1, ...t1], t2) : [transfer(h1, t1), ...combine([h2], t2)]
    };
  combine([], list);
};