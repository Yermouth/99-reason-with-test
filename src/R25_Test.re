open Jest;

open Expect;

let () =
  describe("Problem 25", () => {
    test("n = 0, m > 0", () =>
      expect(R25.permutation(["a"])) |> toEqual(["a"])
    );
    test("n > 0, m > 0", () =>
      expect(R25.permutation(["a", "a", "a"])) |> toEqual(["a", "a", "a"])
    );
    test("n > 0, m >> 0", () =>
      expect(R25.permutation(["a", "b", "c", "d", "e", "f"]))
      |> toEqual(["c", "e", "f", "b", "a", "d"])
    );
  });