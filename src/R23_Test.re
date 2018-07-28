open Jest;

open Expect;

let () =
  describe("Problem 23", () => {
    test("empty list, n = 0", () =>
      expect(R23.rand_select([], 0)) |> toEqual([])
    );
    test("length one list, n = 1", () =>
      expect(R23.rand_select([0], 1)) |> toEqual([0])
    );
    test("normal list, n = 3", () =>
      expect(R23.rand_select([1, 2, 3, 4, 5], 3)) |> toEqual([5, 4, 1])
    );
    test("normal list, n = 0", () =>
      expect(R23.rand_select([1, 2, 3, 4, 5], 0)) |> toEqual([])
    );
    test("normal list, n = 5", () =>
      expect(R23.rand_select([1, 2, 3, 4, 5], 5))
      |> toEqual([3, 2, 1, 4, 5])
    );
  });