/* 37. Calculate Euler's totient function φ(m) (improved). (medium)
   See problem "Calculate Euler's totient function φ(m)" for the definition of Euler's totient function. If the list of the prime factors of a number m is known in the form of the previous problem then the function phi(m) can be efficiently calculated as follows: Let [(p1, m1); (p2, m2); (p3, m3); ...] be the list of prime factors (and their multiplicities) of a given number m. Then φ(m) can be calculated with the following formula:

   φ(m) = (p1 - 1) × p1m1 - 1 × (p2 - 1) × p2m2 - 1 × (p3 - 1) × p3m3 - 1 × ... */
let phi_improved = m => {
  let fs = R36.factors(m);
  let rec pow = (x, p) => p < 1 ? 1 : x * pow(x, p - 1);
  let rec eulers_totient = (list, acc) =>
    switch (list) {
    | [] => acc
    | [(p, m), ...t] => eulers_totient(t, acc * (p - 1) * pow(p, m - 1))
    };
  eulers_totient(fs, 1);
};