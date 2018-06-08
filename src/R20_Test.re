open Jest;

open Expect;

let () =
  describe("Problem 20", () => {
    test("length 0 list", () =>
      expect(R20.remove_at(1, [])) |> toEqual([])
    );
    test("length 1 list with N = 0", () =>
      expect(R20.remove_at(0, [1])) |> toEqual([])
    );
    test("length 1 list with N = 1", () =>
      expect(R20.remove_at(1, [1])) |> toEqual([1])
    );
    test("length 1 list with N = -1", () =>
      expect(R20.remove_at(-1, [1])) |> toEqual([1])
    );
    test("normal list with N = -2", () =>
      expect(R20.remove_at(-2, [1, 2, 1, 2, 3]))
      |> toEqual([1, 2, 1, 2, 3])
    );
    test("normal list with N = 0", () =>
      expect(R20.remove_at(0, [1, 2, 1, 2, 3])) |> toEqual([2, 1, 2, 3])
    );
    test("normal list with N = 2", () =>
      expect(R20.remove_at(2, ["a", "b", "c", "c", "a", "a", "a"]))
      |> toEqual(["a", "b", "c", "a", "a", "a"])
    );
    test("normal list with N > length of list", () =>
      expect(R20.remove_at(100, ["a", "b", "c", "c", "a", "a", "a"]))
      |> toEqual(["a", "b", "c", "c", "a", "a", "a"])
    );
  });