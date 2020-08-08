let func = new Function("x","y","z","return x+y+z")

console.log(func(1,2,3))

function fact(num){
    if(num<=0){
        return 1;
    }else{
        return (num*fact(num-1))
    }
}

console.log(fact(6));


(function(){
    console.log("anonymous");
})();

// var food = (x,y,z) => {
//     return x+y+z;
// }

var food = (x,y,z) => x+y+z;

console.log("food :",food(1,2,3));


var sqr= x => x*x;
console.log(sqr(2));