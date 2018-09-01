/* 32. Determine the greatest common divisor of two positive integer numbers. (medium)
   Use Euclid's algorithm. */

let rec gcd = (a, b) => b == 0 ? a : gcd(b, a mod b);