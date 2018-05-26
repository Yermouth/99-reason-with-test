(* 1. Write a function last : 'a list -> 'a option that returns the last element 
of a list. (easy) *)

let rec last = function
  | [] -> None
  | [x] -> Some x
  | _ :: t -> last t;;