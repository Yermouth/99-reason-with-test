open Jest;
open Expect;

let () =
  describe("Problem 2", () => {
    test("empty list", () => 
      expect(R02.last_two([])) |> toEqual(None));

    test("list with one element", () => 
      expect(R02.last_two([1])) |> toEqual(None));

    test("list with >2 elements", () => 
      expect(R02.last_two([1, 2, 3, 4])) |> toEqual(Some([3, 4])));
  });