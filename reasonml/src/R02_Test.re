open Jest;
open Expect;

let () =
  describe("Problem 2", () => {
    test("Empty list", () => 
      expect(R02.last_two([])) |> toEqual(None));

    test("List with one element", () => 
      expect(R02.last_two([1])) |> toEqual(None));

    test("List with >2 elements", () => 
      expect(R02.last_two([1, 2, 3, 4])) |> toEqual(Some([3, 4])));
  });