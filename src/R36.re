/* 36. Determine the prime factors of a given positive integer (2). (medium)
   Construct a list containing the prime factors and their multiplicity. Hint: The problem is similar to problem Run-length encoding of a list (direct solution). */

let factors = n => {
  let rec get_factor = (n, f, c, list) =>
    switch (n) {
    | _ when n mod f == 0 => get_factor(n / f, f, c + 1, list)
    | _ when c > 0 => get_factor(n, f + 1, 0, [(f, c), ...list])
    | 1 => list
    | _ => get_factor(n, f + 1, 0, list)
    };
  List.rev(get_factor(n, 2, 0, []));
};