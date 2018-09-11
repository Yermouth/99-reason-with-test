open Jest;

open Expect;

let () =
  describe("Problem R37", () => {
    test("Default 1", () =>
      expect(R37.phi_improved(10)) |> toEqual(4)
    );
    test("Default 2", () =>
      expect(R37.phi_improved(13)) |> toEqual(12)
    );
    test("m = 1", () =>
      expect(R37.phi_improved(1)) |> toEqual(1)
    );
    test("m > 1, prime", () =>
      expect(R37.phi_improved(5)) |> toEqual(4)
    );
    test("m > 1, non prime", () =>
      expect(R37.phi_improved(8)) |> toEqual(4)
    );
    test("m >> 1, prime", () =>
      expect(R37.phi_improved(137)) |> toEqual(136)
    );
    test("m >> 1, non prime", () =>
      expect(R37.phi_improved(363)) |> toEqual(220)
    );
  });