let print_option_string = (option_string) => 
  switch option_string {
  | None => "None"
  | Some(v) => v
  };

let output1:string = print_option_string(Some("test1"));
let output2:string = print_option_string(None);