open Jest;

open Expect;

let () =
  describe("Problem 36", () => {
    test("Default", () =>
      expect(R36.factors(315)) |> toEqual([(3, 2), (5, 1), (7, 1)])
    );
    test("n = 1", () =>
      expect(R36.factors(1)) |> toEqual([])
    );
    test("n is small prime", () =>
      expect(R36.factors(2)) |> toEqual([(2, 1)])
    );
    test("n is prime", () =>
      expect(R36.factors(7)) |> toEqual([(7, 1)])
    );
    test("n is square", () =>
      expect(R36.factors(49)) |> toEqual([(7, 2)])
    );
    test("n is cube", () =>
      expect(R36.factors(1000)) |> toEqual([(2, 3), (5, 3)])
    );
    test("n is large prime", () =>
      expect(R36.factors(9001)) |> toEqual([(9001, 1)])
    );
    test("n is large cube", () =>
      expect(R36.factors(90012))
      |> toEqual([(2, 2), (3, 1), (13, 1), (577, 1)])
    );
  });