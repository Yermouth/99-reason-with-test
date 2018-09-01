open Jest;

open Expect;

let () =
  describe("Problem 32", () => {
    test("a = 1, b = 1", () =>
      expect(R32.gcd(1, 1)) |> toEqual(1)
    );
    test("a = 1, b > 1", () =>
      expect(R32.gcd(1, 5)) |> toEqual(1)
    );
    test("a > 1, b = 1", () =>
      expect(R32.gcd(5, 1)) |> toEqual(1)
    );
    test("a > 1, b > 1", () =>
      expect(R32.gcd(5, 5)) |> toEqual(5)
    );
    test("gcd = 1", () =>
      expect(R32.gcd(49, 36)) |> toEqual(1)
    );
    test("gcd = 2", () =>
      expect(R32.gcd(24, 14)) |> toEqual(2)
    );
    test("gcd = 3", () =>
      expect(R32.gcd(939, 9)) |> toEqual(3)
    );
    test("gcd = 4", () =>
      expect(R32.gcd(160, 52)) |> toEqual(4)
    );
    test("gcd = 10", () =>
      expect(R32.gcd(90, 70)) |> toEqual(10)
    );
    test("gcd = 20", () =>
      expect(R32.gcd(100, 60)) |> toEqual(20)
    );
  });