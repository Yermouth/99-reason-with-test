/* 4. Find the number of elements of a list. (easy) */
let rec length = list =>
  switch list {
  | [] => 0
  | [_, ...t] => 1 + length(t)
  };