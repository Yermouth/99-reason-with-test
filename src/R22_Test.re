open Jest;

open Expect;

let () =
  describe("Problem 22", () => {
    test("s == e == 1", () =>
      expect(R22.range(1, 1)) |> toEqual([1])
    );
    test("s = 0 < e", () =>
      expect(R22.range(0, 1)) |> toEqual([0, 1])
    );
    test("s > e = 0", () =>
      expect(R22.range(1, 0)) |> toEqual([1, 0])
    );
    test("general s > e", () =>
      expect(R22.range(5, 10)) |> toEqual([5, 6, 7, 8, 9, 10])
    );
    test("general s < e", () =>
      expect(R22.range(10, 5)) |> toEqual([10, 9, 8, 7, 6, 5])
    );
  });