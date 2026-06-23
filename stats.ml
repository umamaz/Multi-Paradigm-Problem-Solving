let mean lst =

  let sum = List.fold_left (+) 0 lst in

  float_of_int sum /. float_of_int (List.length lst) 



let median lst =

  let sorted = List.sort compare lst in

  let n = List.length sorted in


  if n mod 2 = 0 then

    let a = List.nth sorted (n/2 - 1) in
    let b = List.nth sorted (n/2) in

    float_of_int(a+b) /. 2.0


  else

    float_of_int(List.nth sorted (n/2))




let mode lst =


  let freq =

    List.fold_left

    (fun acc x ->

        let count =

          try List.assoc x acc + 1

          with Not_found -> 1

        in

        (x,count)::List.remove_assoc x acc

    )

    [] lst


  in


  let max_count =

    List.fold_left

    (fun acc (_,c) -> max acc c)

    0 freq


  in


  if max_count = 1 then

    []


  else

    List.fold_left

    (fun acc (x,c) ->

        if c=max_count then x::acc

        else acc

    )

    []

    freq





let range lst =

  let sorted = List.sort compare lst in

  List.hd(List.rev sorted) - List.hd sorted





let standard_deviation lst =

  let avg = mean lst in


  let sum =

    List.fold_left

    (fun acc x ->

      acc +. ((float_of_int x -. avg) ** 2.0)

    )

    0.0 lst


  in


  sqrt(sum /. float_of_int(List.length lst))





let () =


  let numbers = [1;1;2;2;3] in


  print_string "Numbers: ";

  List.iter (Printf.printf "%d ") numbers;


  print_endline "\n";


  Printf.printf "Mean: %.2f\n" (mean numbers);

  Printf.printf "Median: %.2f\n" (median numbers);



  let modes = mode numbers in


  if modes=[] then

    print_endline "Mode: No mode"

  else

  (

    print_string "Mode(s): ";

    List.iter (Printf.printf "%d ") modes;

    print_newline()

  );


  Printf.printf "Range: %d\n" (range numbers);


  Printf.printf "Standard Deviation: %.2f\n"
  (standard_deviation numbers)
