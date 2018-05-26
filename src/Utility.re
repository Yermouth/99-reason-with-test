let print_option_string = (option_string) => 
  switch option_string {
  | None => "None"
  | Some(v) => v
  };