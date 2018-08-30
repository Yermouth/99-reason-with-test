open Jest;

open Expect;

/* Using native reasonml can handle n ~ 100000 */

let () =
  describe("Problem 31", () => {
    test("k = 1", () =>
      expect(R31.is_prime(1)) |> toEqual(false)
    );
    test("k > 1", () =>
      expect(R31.is_prime(7)) |> toEqual(true)
    );
    test("k > 1", () =>
      expect(R31.is_prime(12)) |> toEqual(false)
    );
    test("k >> 1", () =>
      expect(R31.is_prime(907)) |> toEqual(true)
    );
    test("k >> 1", () =>
      expect(R31.is_prime(1000)) |> toEqual(false)
    );
  });