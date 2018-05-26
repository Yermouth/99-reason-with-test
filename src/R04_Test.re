open Jest;
open Expect;

let () =
  describe("Problem 4", () => {
    test("length 0 list", () => 
      expect(R04.length([])) |> toEqual(0));

    test("length 3 list", () => 
      expect(R04.length([1, 2, 3])) |> toEqual(3));
  });