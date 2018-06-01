open Jest;

open Expect;

let () =
  describe("Problem 9", () => {
    test("length 0 list", () =>
      expect(R09.pack([])) |> toEqual([])
    );
    test("normal list without duplicates", () =>
      expect(R09.pack([1, 2, 1, 2, 3])) |> toEqual([[1], [2], [1], [2], [3]])
    );
    test("normal list with duplicates", () =>
      expect(R09.pack([1, 2, 2, 1, 1, 2, 2, 2, 3]))
      |> toEqual([[1], [2, 2], [1, 1], [2, 2, 2], [3]])
    );
  });