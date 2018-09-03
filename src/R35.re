/* 35. Determine the prime factors of a given positive integer. (medium)
   Construct a flat list containing the prime factors in ascending order.*/

let factors = n => {
  let rec get_factor = (n, f, list) =>
    switch (n) {
    | 1 => list
    | _ when n mod f == 0 => get_factor(n / f, f, [f, ...list])
    | _ => get_factor(n, f + 1, list)
    };
  List.rev(get_factor(n, 2, []));
};