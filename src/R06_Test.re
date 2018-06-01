open Jest;

open Expect;

let () =
  describe("Problem 6", () => {
    test("length 0 list", () =>
      expect(R06.is_palindrome([])) |> toEqual(true)
    );
    test("length odd length palindrom", () =>
      expect(R06.is_palindrome([1, 2, 3, 2, 1])) |> toEqual(true)
    );
    test("length even length palindrom", () =>
      expect(R06.is_palindrome([1, 2, 2, 1])) |> toEqual(true)
    );
    test("length odd length non-palindrom", () =>
      expect(R06.is_palindrome([1, 2, 3, 5, 1])) |> toEqual(false)
    );
    test("length even length non-palindrom", () =>
      expect(R06.is_palindrome([1, 2, 6, 1])) |> toEqual(false)
    );
  });

let () =
  describe("Problem 6 better implementation", () => {
    test("length 0 list", () =>
      expect(R06.is_palindrome_2([])) |> toEqual(true)
    );
    test("length odd length palindrom", () =>
      expect(R06.is_palindrome_2([1, 2, 3, 2, 1])) |> toEqual(true)
    );
    test("length even length palindrom", () =>
      expect(R06.is_palindrome_2([1, 2, 2, 1])) |> toEqual(true)
    );
    test("length odd length non-palindrom", () =>
      expect(R06.is_palindrome_2([1, 2, 3, 5, 1])) |> toEqual(false)
    );
    test("length even length non-palindrom", () =>
      expect(R06.is_palindrome_2([1, 2, 6, 1])) |> toEqual(false)
    );
  });