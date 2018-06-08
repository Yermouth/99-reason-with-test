/* 15. Replicate the elements of a list a given number of times. (medium) */

let rec replicate = (list, count) => {
  let rec rep = (acc, cnt, list) =>
    switch (cnt, list) {
    | (_, []) => acc
    | (0, [_, ...t]) => rep(acc, count, t)
    | (c, [h, ..._] as ht) => rep([h, ...acc], c - 1, ht)
    };
  List.rev(rep([], count, list));
};