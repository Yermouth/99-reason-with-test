/* 5. Reverse a list. (easy) */

let rec rev = (list) => {
  let rec reverse = (acc, list) =>
    switch list {
    | [] => acc
    | [h, ...t] => reverse([h, ...acc], t)
    };
  reverse([], list);
};