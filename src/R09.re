/* 9. Pack consecutive duplicates of list elements into sublists. (medium) */
let pack = list => {
  let rec pac = (cur, acc, list) =>
    switch (list) {
    | [] => []
    | [h] => [[h, ...cur], ...acc]
    | [h1, ...[h2, ..._] as t] when h1 == h2 => pac([h1, ...cur], acc, t)
    | [h1, ...t] => pac([], [[h1, ...cur], ...acc], t)
    };
  List.rev(pac([], [], list));
};
/*
 let pack = list => {
   let rec pack_duplicates = (acc, list) =>
     switch (acc, list) {
     | (_, [])
     | ([[], ..._], [_, ..._]) => acc
     | ([], [h, ...t]) => pack_duplicates([[h]], t)
     | ([[h1, ...t1], ...t2], [h2, ...t3]) =>
       h1 == h2 ?
         pack_duplicates([[h2, h1, ...t1], ...t2], t3) :
         pack_duplicates([[h2], [h1, ...t1], ...t2], t3)
     };
   List.rev(pack_duplicates([], list));
 };
 */