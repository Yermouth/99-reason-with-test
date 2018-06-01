open Jest;

open Expect;

let () =
  describe("Problem 10", () => {
    test("length 0 list", () =>
      expect(R10.encode([])) |> toEqual([])
    );
    test("normal list without duplicates", () =>
      expect(R10.encode([1, 2, 1, 2, 3]))
      |> toEqual([(1, 1), (1, 2), (1, 1), (1, 2), (1, 3)])
    );
    test("normal list with duplicates", () =>
      expect(R10.encode(["a", "b", "b", "b", "c", "c", "a"]))
      |> toEqual([(1, "a"), (3, "b"), (2, "c"), (1, "a")])
    );
  });