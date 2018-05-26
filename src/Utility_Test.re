open Jest;

open Expect;

let () =
  describe("Problem 1 test", () => {
    test("basic test", () =>
      expect(Utility.print_option_string(Some("test1"))) |> toEqual("test1"));
    test("test print_option_string in utility", () =>
      expect(Utility.print_option_string(None)) |> toEqual("None"));
  });