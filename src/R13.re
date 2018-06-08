/* 13. Run-length encoding of a list (direct solution). (medium)
   Implement the so-called run-length encoding data compression method directly. */

type node('a) =
  | One('a)
  | Many(int, 'a);

let encode = list => {
  let node_of_turple = (cnt, x) =>
    switch (cnt) {
    | 1 => One(x)
    | _ => Many(cnt, x)
    };
  let rec enc = (cnt, acc, list) =>
    switch (list) {
    | [] => acc
    | [x] => enc(0, [node_of_turple(cnt + 1, x), ...acc], [])
    | [h1, ...[h2, ..._] as t] when h1 == h2 => enc(cnt + 1, acc, t)
    | [h, ...t] => enc(0, [node_of_turple(cnt + 1, h), ...acc], t)
    };
  List.rev(enc(0, [], list));
};