/* 12. Decode a run-length encoded list. (medium)
   Given a run-length code list generated as specified in the previous problem,
   construct its uncompressed version. */

type node('a) =
  | One('a)
  | Many(int, 'a);

let decode = list => {
  let rec dec = (acc, list) =>
    switch (list) {
    | [] => acc
    | [One(x), ...t] => dec([x, ...acc], t)
    | [Many(1, x), ...t] => dec([x, ...acc], t)
    | [Many(cnt, x), ...t] => dec([x, ...acc], [Many(cnt - 1, x), ...t])
    };
  List.rev(dec([], list));
};