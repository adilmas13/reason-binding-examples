// type person = {
//     name:string,
//     age:int
// };


// [@bs.val] external bob : person = "bob";
// [@bs.get] external get_age : person => int = "age";
// [@bs.set] external set_age : (person, int) => unit = "age";

// let () = {
//   let bobAge = get_age(bob);
//   set_age(bob, bobAge + 1)
// };

let add = [%raw {|
    (a,b) => a + b
|}];

Js.log(add(1,2));