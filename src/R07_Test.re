open Jest;

open Expect;

open R07;

let () =
  describe("Problem 7", () => {
    test("empty list", () =>
      expect(R07.flatten([])) |> toEqual([])
    );
    test("1 layer list", () =>
      expect(R07.flatten([One(1), One(2), One(3), One(4), One(5)]))
      |> toEqual([1, 2, 3, 4, 5])
    );
    test("2 layer list", () =>
      expect(
        R07.flatten([One(1), Many([One(2), One(3), One(4)]), One(5)]),
      )
      |> toEqual([1, 2, 3, 4, 5])
    );
    test("3 layer nested list", () =>
      expect(
        R07.flatten([
          One("a"),
          Many([One("b"), Many([One("c"), One("d")]), One("e")]),
        ]),
      )
      |> toEqual(["a", "b", "c", "d", "e"])
    );
  });