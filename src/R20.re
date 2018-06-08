/* 20. Remove the K'th element from a list. (easy) */

let remove_at = (k, list) => {
  let rec rem = (cur, acc, list) =>
    switch (list) {
    | [] => acc
    | [_, ...t] when cur == k => rem(cur + 1, acc, t)
    | [h, ...t] => rem(cur + 1, [h, ...acc], t)
    };
  List.rev(rem(0, [], list));
};