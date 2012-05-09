(* If we list all the natural numbers below 10 that are multiples of 3 or
 * 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *)

(* Use fold and map for this, I think *)

#light 

let mult3 n =
   ((n % 3) = 0);;
   
let mult5 n = 
   ((n % 5) = 0);;

let mult3or5 n = 
   ((mult3 n) || (mult5 n));;


let input1000 = List.init 999 (fun index->index+1);;
let input10 = List.init 9 (fun index->index+1);;

let mults = List.map mult3or5 input10;;

let mult3or5val n = if (mult3or5 n) then n else 0;;

let eulerOne lst = List.fold (+) 0 (List.map (mult3or5val) lst);;

printfn "eulerOne(input1000) = %i" (eulerOne input1000);;
