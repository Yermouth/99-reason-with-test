open Jest;

open Expect;

let () =
  describe("Problem 21", () => {
    test("length 0 list with N = 0", () =>
      expect(R21.insert_at(1, 0, [])) |> toEqual([1])
    );
    test("length 0 list with N = 1", () =>
      expect(R21.insert_at(1, 1, [])) |> toEqual([1])
    );
    test("length 1 list with N = 0", () =>
      expect(R21.insert_at(2, 0, [1])) |> toEqual([2, 1])
    );
    test("length 1 list with N = 1", () =>
      expect(R21.insert_at(2, 1, [1])) |> toEqual([1, 2])
    );
    test("length 1 list with N > list length", () =>
      expect(R21.insert_at(100, 100, [1])) |> toEqual([1, 100])
    );
    test("normal list with N = 0", () =>
      expect(R21.insert_at(0, 0, [1, 2, 1, 2, 3]))
      |> toEqual([0, 1, 2, 1, 2, 3])
    );
    test("normal list with N = 2", () =>
      expect(R21.insert_at("test", 2, ["a", "b", "c", "c", "a", "a", "a"]))
      |> toEqual(["a", "b", "test", "c", "c", "a", "a", "a"])
    );
    test("normal list with N > length of list", () =>
      expect(
        R21.insert_at("test", 100, ["a", "b", "c", "c", "a", "a", "a"]),
      )
      |> toEqual(["a", "b", "c", "c", "a", "a", "a", "test"])
    );
  });