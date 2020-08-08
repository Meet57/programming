// generator function

function* query(){
    const name = yield "what's your name";
    const sport = yield "what's your sport";
    return `${name} and ${sport}`;
}

const instance = query();
console.log(instance.next());
console.log(instance.next("meet"));
console.log(instance.next("football"));