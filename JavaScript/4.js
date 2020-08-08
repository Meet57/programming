//generator fucntion

function* naturalNumber(){
    let number=1;
    while(true){
        yield number++;
    }
}

var nn = naturalNumber();

console.log("Natural Number : ")
console.log(nn.next().value);
console.log(nn.next().value);
console.log(nn.next().value);

function* genparam(){
    console.log('hey', yield);
    console.log('hru', yield);
}

let m = genparam()
m.next();
m.next("Meet");
m.next("Hello");
m.next("Fine"); // this will not work

function* genreturn() {
    yield "y";
    return "Meet";
    yield "z";
}

var gen = genreturn();
console.log(gen.next().value);
console.log(gen.next().value);
console.log(gen.next()); //no yeild after return function

function* mygen(name) {
    yield `hi ${name}`;
    yield "Bye !";
}
var gen1 = mygen("Meet");

console.log(gen1.next().value);
console.log(gen1.next().value);