/* 3. Find the k'th element of a list. (easy) */

let rec at = (k, list) =>
  switch list {
  | [] => None
  | [h, ...t] => 
    switch k {
    | 0 => None
    | 1 => Some(h)
    | _ => at(k-1, t)
    }
  };
