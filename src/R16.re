/* 16. Drop every N'th element from a list. (medium) */

let drop = (list, n) => {
  let rec dro = (cnt, acc, list) =>
    switch (list) {
    | [] => acc
    | [_, ...t] when cnt == n => dro(1, acc, t)
    | [h, ...t] => dro(cnt + 1, [h, ...acc], t)
    };
  List.rev(dro(1, [], list));
};