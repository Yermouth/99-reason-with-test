/* 23. Extract a given number of randomly selected elements from a list. (medium)
   The selected items shall be returned in a list. We use the Random module
   but do not initialize it with Random.self_init for reproducibility. */

let rec rand_select = (list, n) => {
  let len = List.length(list);
  let rec sel = (acc, n, list) =>
    switch (list) {
    | [] => raise(Not_found)
    | [h, ...t] when n == 0 => (h, acc @ t)
    | [h, ...t] => sel([h, ...acc], n - 1, t)
    };
  let ran_sel_one = (list, n) =>
    switch (n) {
    | 0 => sel([], 0, list)
    | _ => sel([], Random.int(n), list)
    };
  let rec ran_sel = (acc, cnt, list, len) =>
    switch (cnt) {
    | 0 => acc
    | _ =>
      let (one, rest) = ran_sel_one(list, len);
      ran_sel([one, ...acc], cnt - 1, rest, len - 1);
    };
  ran_sel([], n, list, len);
};