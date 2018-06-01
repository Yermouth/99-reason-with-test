open Jest;

open Expect;

open R11;

let () =
  describe("Problem 11", () => {
    test("length 0 list", () =>
      expect(R11.encode([])) |> toEqual([])
    );
    test("length 1 list without duplicates", () =>
      expect(R11.encode([1])) |> toEqual([One(1)])
    );
    test("length 1 list with duplicates", () =>
      expect(R11.encode([1, 1, 1, 1, 1])) |> toEqual([Many(5, 1)])
    );
    test("normal list without duplicates", () =>
      expect(R11.encode([1, 2, 1, 2, 3]))
      |> toEqual([One(1), One(2), One(1), One(2), One(3)])
    );
    test("normal list with duplicates", () =>
      expect(R11.encode(["a", "b", "b", "b", "c", "c", "a"]))
      |> toEqual([One("a"), Many(3, "b"), Many(2, "c"), One("a")])
    );
    test("normal list with all duplicates", () =>
      expect(R11.encode(["b", "b", "b", "c", "c", "a", "a", "a"]))
      |> toEqual([Many(3, "b"), Many(2, "c"), Many(3, "a")])
    );
  });