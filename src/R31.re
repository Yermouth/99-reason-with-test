/* 31. Determine whether a given integer number is prime. (medium) */
/* Sieve of Eratosthenes version */

let is_prime = n => {
  let rec contain = (list, n) =>
    switch (list) {
    | [] => false
    | [h, ...t] => h == n || contain(t, n)
    };
  let range_from_2 = n => {
    let rec ran = (list, s, e) =>
      s > e ? list : [s, ...ran(list, s + 1, e)];
    ran([], 2, n);
  };
  let rec sieve_of_eratosthenes = (list, mul, max) => {
    let rec remove_multiple = (list, mul) =>
      switch (list) {
      | [] => []
      | [h, ...t] when h mod mul == 0 => remove_multiple(t, mul)
      | [h, ...t] => [h, ...remove_multiple(t, mul)]
      };
    mul > max ?
      list : sieve_of_eratosthenes(remove_multiple(list, mul), mul + 1, max);
  };
  let max = int_of_float(Pervasives.sqrt(float_of_int(n)));
  contain(sieve_of_eratosthenes(range_from_2(n), 2, max), n);
};