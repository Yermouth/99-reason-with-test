/* 21. Insert an element at a given position into a list. (easy) */

let rec insert_at = (e, n, list) =>
  switch (list) {
  | [] => [e]
  | [_, ..._] as ht when n == 0 => [e, ...ht]
  | [h, ...t] => [h, ...insert_at(e, n - 1, t)]
  };