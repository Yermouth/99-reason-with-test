open Jest;

open Expect;

let () =
  describe("Problem 11", () => {
    test("length 0 list", () =>
      expect(R14.duplicate([])) |> toEqual([])
    );
    test("length 1 list without duplicates", () =>
      expect(R14.duplicate([1])) |> toEqual([1, 1])
    );
    test("normal list without duplicates", () =>
      expect(R14.duplicate([1, 2, 1, 2, 3]))
      |> toEqual([1, 1, 2, 2, 1, 1, 2, 2, 3, 3])
    );
    test("normal list with duplicates", () =>
      expect(R14.duplicate(["a", "b", "c", "c", "a"]))
      |> toEqual(["a", "a", "b", "b", "c", "c", "c", "c", "a", "a"])
    );
    test("normal list with all duplicates", () =>
      expect(R14.duplicate(["b", "b", "c", "c", "a", "a"]))
      |> toEqual(["b", "b", "b", "b", "c", "c", "c", "c", "a", "a", "a", "a"])
    );
  });