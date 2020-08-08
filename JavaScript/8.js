//object.assign()

let student = {
    name : "Meet",
    age : 20
}

let tutor = {};

tutor = Object.assign({},student);

console.log(tutor);

//Appending

let skills = {
    languages : ["Python","Js"]
};

tutor = Object.assign({},student,skills);

console.log(tutor);
console.log(student);

//Merge

let hobbies = {
    hobby : "Travelling"
}

Object.assign(student,skills,hobbies);

console.log(student);