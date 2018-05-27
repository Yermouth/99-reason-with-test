/* 6. Find out whether a list is a palindrome. (easy) */

/* my first thought */
let is_palindrome = (list) => {
  let rec same = (a, b) =>
    switch a {
    | ([]) => true
    | ([h, ...t]) => (h == List.hd(b)) && same(t, List.tl(b)) 
    };
  same(list, R05.rev(list))
};

/* a better implementation should be: */
let is_palindrome_2 = (list) => list == R05.rev(list);
