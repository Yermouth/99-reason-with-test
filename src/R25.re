/* 25. Generate a random permutation of the elements of a list. (easy) */
open R20;

let permutation = list => {
  let rec per = (acc, list, len) =>
    /* let ran = len - 1; */
    switch (len) {
    | 0 => acc
    | _ =>
      let ran = Random.int(len);
      per(
        [List.nth(list, ran), ...acc],
        R20.remove_at(ran, list),
        len - 1,
      );
    };
  per([], list, List.length(list));
};