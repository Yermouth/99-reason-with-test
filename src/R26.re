/* 26. Generate the combinations of K distinct objects chosen from the N
   elements of a list. (medium)
   In how many ways can a committee of 3 be chosen from a group of 12 people?
   We all know that there are C(12,3) = 220 possibilities (C(N,K) denotes the
   well-known binomial coefficients). For pure mathematicians, this result may
   be great. But we want to really generate all the possibilities in a list. */

let rec extract = (k, list) =>
  switch (k) {
  | 0 => [[]]
  | _ =>
    switch (list) {
    | [] => []
    | [h, ...t] =>
      let with_h = List.map(li => [h, ...li], extract(k - 1, t));
      let without_h = extract(k, t);
      List.append(with_h, without_h);
    }
  };