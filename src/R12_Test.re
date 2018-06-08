open Jest;

open Expect;

open R12;

let () =
  describe("Problem 12", () => {
    test("length 0 list", () =>
      expect(R12.decode([])) |> toEqual([])
    );
    test("length 1 list without duplicates", () =>
      expect(R12.decode([One(1)])) |> toEqual([1])
    );
    test("length 1 list with duplicates", () =>
      expect(R12.decode([Many(5, 1)])) |> toEqual([1, 1, 1, 1, 1])
    );
    test("normal list without duplicates", () =>
      expect(R12.decode([One(1), One(2), One(1), One(2), One(3)]))
      |> toEqual([1, 2, 1, 2, 3])
    );
    test("normal list with duplicates", () =>
      expect(
        R12.decode([One("a"), Many(3, "b"), Many(2, "c"), One("a")]),
      )
      |> toEqual(["a", "b", "b", "b", "c", "c", "a"])
    );
    test("normal list with all duplicates", () =>
      expect(R12.decode([Many(3, "b"), Many(2, "c"), Many(3, "a")]))
      |> toEqual(["b", "b", "b", "c", "c", "a", "a", "a"])
    );
  });