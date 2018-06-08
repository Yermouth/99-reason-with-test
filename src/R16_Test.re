open Jest;

open Expect;

let () =
  describe("Problem 16", () => {
    test("length 0 list", () =>
      expect(R16.drop([], 1)) |> toEqual([])
    );
    test("length 1 list with N = 1", () =>
      expect(R16.drop([1], 1)) |> toEqual([])
    );
    test("normal list with N = 1", () =>
      expect(R16.drop([1, 2, 1, 2, 3], 1)) |> toEqual([])
    );
    test("normal list with N = 2", () =>
      expect(R16.drop([1, 2, 1, 2, 3], 2)) |> toEqual([1, 1, 3])
    );
    test("normal list with N = 3", () =>
      expect(R16.drop(["a", "b", "c", "c", "a", "a", "a"], 3))
      |> toEqual(["a", "b", "c", "a", "a"])
    );
  });