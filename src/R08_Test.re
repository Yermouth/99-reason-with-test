open Jest;

open Expect;

let () =
  describe("Problem 8", () => {
    test("length 0 list", () =>
      expect(R08.compress([])) |> toEqual([])
    );
    test("length 1 list", () =>
      expect(R08.compress(["a"])) |> toEqual(["a"])
    );
    test("normal list with duplicates", () =>
      expect(R08.compress([1, 2, 2, 1, 1, 2, 2, 2, 3]))
      |> toEqual([1, 2, 1, 2, 3])
    );
  });