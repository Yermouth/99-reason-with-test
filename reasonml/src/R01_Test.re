open Jest;
open Expect;

let () =
  describe("Problem 1", () => {
    test("Empty list", () =>
      expect(R01.last([])) |> toEqual(None));

    test("List with elements", () =>
      expect(R01.last(["a", "b", "c", "d", "e"])) |> toEqual(Some("e")));
  });