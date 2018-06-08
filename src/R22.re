/* 22. Create a list containing all integers within a given range. (easy) */

let range = (s, e) => {
  let step = s <= e ? 1 : (-1);
  let rec ran = (acc, s, e) => {
    let stop = s == e;
    stop ? [s, ...acc] : ran([s, ...acc], s + step, e);
  };
  List.rev(ran([], s, e));
};