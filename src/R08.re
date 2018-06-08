/* 8. Eliminate consecutive duplicates of list elements. (medium) */
let rec compress = list =>
  switch (list) {
  | [] => []
  | [h] => [h]
  | [h1, ...[h2, ..._] as t] when h1 == h2 => compress(t)
  | [h1, ...t] => [h1, ...compress(t)]
  };

/* my first thought */
/*
 let compress2 = list => {
   let rec remove_duplicate = (acc, list) =>
     switch (list) {
     | [] => acc
     | [h] => remove_duplicate([h, ...acc], [])
     | [h1, h2, ...t] =>
       h1 == h2 ?
         remove_duplicate(acc, [h2, ...t]) :
         remove_duplicate([h1, ...acc], [h2, ...t])
     };
   List.rev(remove_duplicate([], list));
 }; */