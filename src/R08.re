/* 8. Eliminate consecutive duplicates of list elements. (medium) */

/* my first thought */
let compress = (list) => {
  let rec remove_duplicate = (acc, list) =>
    switch list {
    | [] => acc
    | [h] => remove_duplicate([h, ...acc], [])
    | [h1, h2, ...t] => h1 == h2? 
      remove_duplicate(acc, [h2, ...t]) : 
      remove_duplicate([h1, ...acc], [h2, ...t])
    };
  List.rev(remove_duplicate([], list))
};

/* Single recursion approach */
/* 
let compress = (list) =>
  switch list {
  | [] => []
  | [h] => [h]
  | [h1, h2, ...t] => h1 == h2? 
    compress([h2, ...t]) : 
    [h1, ...compress([h2, ...t])]
  };
*/