/* 24. Lotto: Draw N different random numbers from the set 1..M. (easy)
   The selected numbers shall be returned in a list. */

let lotto_select = (n, m) => {
  let rec lot = (acc, n, m) =>
    switch (n) {
    | 0 => acc
    | _ => lot([Random.int(m), ...acc], n - 1, m)
    };
  lot([], n, m);
};