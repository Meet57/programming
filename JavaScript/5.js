//object

let student = {
    usn : "114",
    firstname : "Meet",
    lastname : "Patel",
    greet : function(){
        return "Hello";
    },
    subjects : ["Web dev","AI","BLockchain"]
};

console.log(student);
console.log(student.greet());
console.log(student.subjects[0]);

// {
//     usn: '114',
//     firstname: 'Meet',
//     lastname: 'Patel',
//     greet: [Function: greet],
//     subjects: [ 'Web dev', 'AI', 'BLockchain' ]
//   }
//   Hello
//   Web dev