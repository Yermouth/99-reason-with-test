open Jest;

open Expect;

let () =
  describe("Problem 15", () => {
    test("length 0 list", () =>
      expect(R15.replicate([], 1)) |> toEqual([])
    );
    test("length 1 list without duplicates", () =>
      expect(R15.replicate([1], 2)) |> toEqual([1, 1])
    );
    test("normal list with replicate times = 3", () =>
      expect(R15.replicate([1, 2, 1, 2, 3], 3))
      |> toEqual([1, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 2, 3, 3, 3])
    );
    test("normal list with duplicates", () =>
      expect(R15.replicate(["a", "b", "c", "c", "a"], 2))
      |> toEqual(["a", "a", "b", "b", "c", "c", "c", "c", "a", "a"])
    );
    test("normal list with all duplicates", () =>
      expect(R15.replicate(["b", "b", "c", "c", "a", "a"], 2))
      |> toEqual(["b", "b", "b", "b", "c", "c", "c", "c", "a", "a", "a", "a"])
    );
  });