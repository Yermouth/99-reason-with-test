open Jest;

open Expect;

let () =
  describe("Problem 18", () => {
    test("length 0 list", () =>
      expect(R18.slice([], 1, 3)) |> toEqual([])
    );
    test("length 1 list with i = 0, k = 1", () =>
      expect(R18.slice([1], 0, 1)) |> toEqual([1])
    );
    test("normal list with i = 0, k = 5", () =>
      expect(R18.slice([1, 2, 1, 2, 3], 0, 5)) |> toEqual([1, 2, 1, 2, 3])
    );
    test("normal list with i = 1, k = 3", () =>
      expect(R18.slice([1, 2, 1, 2, 3], 1, 3)) |> toEqual([2, 1, 2])
    );
    test("normal list with i = 5, k = 3 (i.e. k < i)", () =>
      expect(R18.slice(["a", "b", "c", "c", "a", "a", "a"], 5, 3))
      |> toEqual([])
    );
    test("normal list with i and k > length of list", () =>
      expect(R18.slice(["a", "b", "c", "c", "a", "a", "a"], -2, 100))
      |> toEqual(["a", "b", "c", "c", "a", "a", "a"])
    );
  });