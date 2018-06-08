open Jest;

open Expect;

let () =
  describe("Problem 17", () => {
    test("length 0 list with N = 0", () =>
      expect(R17.split([], 0)) |> toEqual(([], []))
    );
    test("length 0 list with N = 1", () =>
      expect(R17.split([], 1)) |> toEqual(([], []))
    );
    test("length 1 list with N = 1", () =>
      expect(R17.split([1], 1)) |> toEqual(([1], []))
    );
    test("normal list with N = 1", () =>
      expect(R17.split([1, 2, 1, 2, 3], 1))
      |> toEqual(([1], [2, 1, 2, 3]))
    );
    test("normal list with N = 2", () =>
      expect(R17.split([1, 2, 1, 2, 3], 2))
      |> toEqual(([1, 2], [1, 2, 3]))
    );
    test("normal list with N = 3", () =>
      expect(R17.split(["a", "b", "c", "c", "a", "a", "a"], 3))
      |> toEqual((["a", "b", "c"], ["c", "a", "a", "a"]))
    );
    test("normal list with N > length of list", () =>
      expect(R17.split(["a", "b", "c", "c", "a", "a", "a"], 10))
      |> toEqual((["a", "b", "c", "c", "a", "a", "a"], []))
    );
  });