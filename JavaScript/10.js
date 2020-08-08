//Comparing objects

let a = 1
let b = 1 

console.log(a==b)
console.log(a===b)

//comparing objects

let obj1 = new Object();
obj1.name = "Patel";

let obj2 = new Object();
obj2.name = "Patel";

console.log(obj1==obj2)
console.log(obj1===obj2)
console.log(Object.is(obj1,obj2))


let obj3 = new Object();
obj3.name = "Meet";

//Mirror objects
let obj4 = obj3;

console.log(obj4==obj3)
console.log(obj4===obj3)
console.log(Object.is(obj4,obj3))

obj4.name = "Patel";

console.log(obj4==obj3)
console.log(obj4===obj3)
console.log(Object.is(obj4,obj3))