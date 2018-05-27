open Jest;
open Expect;

let () =
  describe("Problem 5", () => {
    test("length 0 list", () => 
      expect(R05.rev([])) |> toEqual([]));

    test("length 3 list", () => 
      expect(R05.rev([1, 2, 3])) |> toEqual([3, 2, 1]));
  });