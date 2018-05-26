open Jest;
open Expect;

let () =
  describe("Problem 3", () => {
    test("0th position", () => 
      expect(R03.at(0, [1, 2, 3])) |> toEqual(None));

    test("empty list", () => 
      expect(R03.at(3, [])) |> toEqual(None));

    test("normal list", () => 
      expect(R03.at(3, [1, 2, 3, 4])) |> toEqual(Some(3)));
  });