open Jest;

open Expect;

let () =
  describe("Problem 26", () => {
    test("k = 0", () =>
      expect(R26.extract(0, ["a"])) |> toEqual([[]])
    );
    test("k = 1", () =>
      expect(R26.extract(1, ["a"])) |> toEqual([["a"]])
    );
    test("k >= 1", () =>
      expect(R26.extract(2, ["a", "b", "c", "d"]))
      |> toEqual([
           ["a", "b"],
           ["a", "c"],
           ["a", "d"],
           ["b", "c"],
           ["b", "d"],
           ["c", "d"],
         ])
    );
  });