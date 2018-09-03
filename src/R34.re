/* 34. Calculate Euler's totient function φ(m). (medium)
   Euler's so-called totient function φ(m) is defined as the number of positive integers r (1 ≤ r < m) that are coprime to m. We let φ(1) = 1.

   Find out what the value of φ(m) is if m is a prime number. Euler's totient function plays an important role in one of the most widely used public key cryptography methods (RSA). In this exercise you should use the most primitive method to calculate this function (there are smarter ways that we shall discuss later). */

let phi = m => {
  let rec count_coprime = (m, n) => {
    let is_coprime = R33.coprime(m, n);
    switch (n) {
    | 1 => 1
    | _ when is_coprime => 1 + count_coprime(m, n - 1)
    | _ => count_coprime(m, n - 1)
    };
  };
  count_coprime(m, m);
};