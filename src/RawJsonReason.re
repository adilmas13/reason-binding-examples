let add = [%raw {|
    (a,b) => a + b
|}];

Js.log(add(1,2));