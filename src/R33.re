/* 33. Determine whether two positive integer numbers are coprime. (easy)
   Two numbers are coprime if their greatest common divisor equals 1. */

let coprime = (a, b) => R32.gcd(a, b) == 1;