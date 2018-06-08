/* 14. Duplicate the elements of a list. (easy) */

let rec duplicate = list =>
  switch (list) {
  | [] => []
  | [h, ...t] => [h, h, ...duplicate(t)]
  };