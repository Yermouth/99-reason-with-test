/* 17. Split a list into two parts; the length of the first part is given.
   (easy) */

let split = (list, n) => {
  let rec spl = (acc, cnt, list) =>
    switch (cnt, list) {
    | (0, _)
    | (_, []) => (List.rev(acc), list)
    | (_, [h, ...t]) => spl([h, ...acc], cnt - 1, t)
    };
  spl([], n, list);
};