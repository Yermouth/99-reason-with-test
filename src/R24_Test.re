open Jest;

open Expect;

let () =
  describe("Problem 24", () => {
    test("n = 0, m = 0", () =>
      expect(R24.lotto_select(0, 0)) |> toEqual([])
    );
    test("n = 0, m > 0", () =>
      expect(R24.lotto_select(0, 5)) |> toEqual([])
    );
    /* test("n > 0 , m = 0", () =>
         expect(R24.lotto_select(5, 0)) |> toEqual([])
       ); */
    test("n > 0, m > 0", () =>
      expect(R24.lotto_select(5, 5)) |> toEqual([4, 1, 2, 0, 4])
    );
    test("n > 0, m >> 0", () =>
      expect(R24.lotto_select(10, 1000000))
      |> toEqual([
           803615,
           698678,
           695949,
           426885,
           955217,
           678370,
           219921,
           807020,
           944104,
           907500,
         ])
    );
  });