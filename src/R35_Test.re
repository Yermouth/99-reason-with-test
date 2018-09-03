open Jest;

open Expect;

let () =
  describe("Problem 35", () => {
    test("Default", () =>
      expect(R35.factors(315)) |> toEqual([3, 3, 5, 7])
    );
    test("n = 1", () =>
      expect(R35.factors(1)) |> toEqual([])
    );
    test("n is small prime", () =>
      expect(R35.factors(2)) |> toEqual([2])
    );
    test("n is prime", () =>
      expect(R35.factors(7)) |> toEqual([7])
    );
    test("n is square", () =>
      expect(R35.factors(49)) |> toEqual([7, 7])
    );
    test("n is cube", () =>
      expect(R35.factors(1000)) |> toEqual([2, 2, 2, 5, 5, 5])
    );
    test("n is large prime", () =>
      expect(R35.factors(9001)) |> toEqual([9001])
    );
    test("n is large cube", () =>
      expect(R35.factors(90012)) |> toEqual([2, 2, 3, 13, 577])
    );
  });