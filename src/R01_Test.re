open Jest;
open Expect;

let () =
  describe("Problem 1", () => {
    test("empty list", () =>
      expect(R01.last([])) |> toEqual(None));

    test("list with elements", () =>
      expect(R01.last(["a", "b", "c", "d", "e"])) |> toEqual(Some("e")));
  });