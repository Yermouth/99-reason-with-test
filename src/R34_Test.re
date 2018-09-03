open Jest;

open Expect;

let () =
  describe("Problem 34", () => {
    test("m = 1", () =>
      expect(R34.phi(1)) |> toEqual(1)
    );
    test("m > 1, prime", () =>
      expect(R34.phi(5)) |> toEqual(4)
    );
    test("m > 1, prime", () =>
      expect(R34.phi(13)) |> toEqual(12)
    );
    test("m > 1, non prime", () =>
      expect(R34.phi(8)) |> toEqual(4)
    );
    test("m > 1, non prime", () =>
      expect(R34.phi(10)) |> toEqual(4)
    );
    test("m >> 1, prime", () =>
      expect(R34.phi(137)) |> toEqual(136)
    );
    test("m >> 1, non prime", () =>
      expect(R34.phi(363)) |> toEqual(220)
    );
  });