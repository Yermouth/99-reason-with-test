open Jest;

open Expect;

let () =
  describe("Problem 1 test", () => {
    test("basic test", () =>
      expect(Utility.output1) |> toEqual("test1"));
    test("test print_option_string in utility", () =>
      expect(Utility.output2) |> toEqual("None"));
  });