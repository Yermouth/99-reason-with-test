/* 20. Remove the K'th element from a list. (easy) */

let rec remove_at = (k, list) =>
  switch (list) {
  | [] => []
  | [_, ...t] when k == 0 => t
  | [h, ...t] => [h, ...remove_at(k - 1, t)]
  };

/* my initial thought */
/* let remove_at = (k, list) => {
     let rec rem = (cur, acc, list) =>
       switch (list) {
       | [] => acc
       | [_, ...t] when cur == k => rem(cur + 1, acc, t)
       | [h, ...t] => rem(cur + 1, [h, ...acc], t)
       };
     List.rev(rem(0, [], list));
   }; */