/* 10. Run-length encoding of a list. (easy) */

let encode = list => {
  let rec enc = (cnt, acc, list) =>
    switch (list) {
    | [] => acc
    | [x] => [(cnt + 1, x), ...acc]
    | [h1, ...[h2, ..._] as t] when h1 == h2 => enc(cnt + 1, acc, t)
    | [h1, ...t] => enc(0, [(cnt + 1, h1), ...acc], t)
    };
  List.rev(enc(0, [], list));
};
/*
 let encode = list => {
   let rec combine = (acc, list) =>
     switch (acc, list) {
     | ([], []) => []
     | ([h, ...t], []) => [(List.length([h, ...t]), h)]
     | ([], [h, ...t]) => combine([h], t)
     | ([h1, ...t1], [h2, ...t2]) =>
       h1 == h2 ?
         combine([h2, h1, ...t1], t2) :
         [(List.length([h1, ...t1]), h1), ...combine([h2], t2)]
     };
   combine([], list);
 };
 */