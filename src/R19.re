/* 19. Rotate a list N places to the left. (medium) */

let rotate = (list, n) => {
  let len = List.length(list);
  let n =
    switch (n, len) {
    | (0, _)
    | (_, 0) => 0
    | _ => (n mod len + len) mod len
    };
  let (a, b) = R17.split(list, n);
  b @ a;
};