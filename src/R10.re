/* 10. Run-length encoding of a list. (easy) */
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