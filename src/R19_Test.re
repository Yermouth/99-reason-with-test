open Jest;

open Expect;

let () =
  describe("Problem 19", () => {
    test("length 0 list", () =>
      expect(R19.rotate([], 1)) |> toEqual([])
    );
    test("length 1 list with N = -1", () =>
      expect(R19.rotate([1], -1)) |> toEqual([1])
    );
    test("length 1 list with N = 0", () =>
      expect(R19.rotate([1], 0)) |> toEqual([1])
    );
    test("length 1 list with N = -1", () =>
      expect(R19.rotate([1], 0)) |> toEqual([1])
    );
    test("normal list with N = -2", () =>
      expect(R19.rotate([1, 2, 1, 2, 3], -2)) |> toEqual([2, 3, 1, 2, 1])
    );
    test("normal list with N = 0", () =>
      expect(R19.rotate([1, 2, 1, 2, 3], 0)) |> toEqual([1, 2, 1, 2, 3])
    );
    test("normal list with N = 2", () =>
      expect(R19.rotate(["a", "b", "c", "c", "a", "a", "a"], 2))
      |> toEqual(["c", "c", "a", "a", "a", "a", "b"])
    );
    test("normal list with N > length of list", () =>
      expect(R19.rotate(["a", "b", "c", "c", "a", "a", "a"], 100))
      |> toEqual(["c", "c", "a", "a", "a", "a", "b"])
    );
  });