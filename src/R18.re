/* 18. Extract a slice from a list. (medium) */

let slice = (list, i, k) => {
  let rec sli = (acc, cur, list) =>
    switch (list) {
    | [] => acc
    | [_, ...t] when cur < i => sli(acc, cur + 1, t)
    | [_, ...t] when cur > k => sli(acc, cur + 1, t)
    | [h, ...t] => sli([h, ...acc], cur + 1, t)
    };
  List.rev(sli([], 0, list));
};