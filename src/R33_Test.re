open Jest;

open Expect;

let () =
  describe("Problem 33", () => {
    test("a = 1, b = 1", () =>
      expect(R33.coprime(1, 1)) |> toEqual(true)
    );
    test("a = 1, b > 1", () =>
      expect(R33.coprime(1, 5)) |> toEqual(true)
    );
    test("a > 1, b = 1", () =>
      expect(R33.coprime(5, 1)) |> toEqual(true)
    );
    test("a > 1, b > 1", () =>
      expect(R33.coprime(5, 5)) |> toEqual(false)
    );
    test("gcd = 1", () =>
      expect(R33.coprime(49, 36)) |> toEqual(true)
    );
    test("gcd = 2", () =>
      expect(R33.coprime(24, 14)) |> toEqual(false)
    );
    test("gcd = 3", () =>
      expect(R33.coprime(939, 9)) |> toEqual(false)
    );
    test("gcd = 4", () =>
      expect(R33.coprime(160, 52)) |> toEqual(false)
    );
    test("gcd = 10", () =>
      expect(R33.coprime(90, 70)) |> toEqual(false)
    );
    test("gcd = 20", () =>
      expect(R33.coprime(100, 60)) |> toEqual(false)
    );
  });