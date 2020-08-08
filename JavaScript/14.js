//Map

  employee1 = {
    name: "Tharun",
    position: "CTO",
    salary: 100000,
  };
  employee2 = {
    name: "Chandu",
    position: "CEO",
    salary: 190000,
  };
  employee3 = {
    name: "Venkat",
    position: "CFO",
    salary: 50000,
  };
  employee4 = {
    name: "Naveen",
    position: "Manager",
    salary: 20000,
  };
  employee5 = {
    name: "Uma",
    position: "HR",
    salary: 70000,
  };
  employee6 = {
    name: "Vasu",
    position: "Engineer",
    salary: 10000,
  };
  employee7 = {
    name: "Saravana",
    position: "Engineer",
    salary: 40000,
  };
  employee8 = {
    name: "Ravi",
    position: "Engineer",
    salary: 50000,
  };
  employee9 = {
    name: "Shiv",
    position: "Engineer",
    salary: 30000,
  };
  employee10 = {
    name: "Govind",
    position: "Engineer",
    salary: 60000,
  };
  employee11 = {
    name: "Bhaskar",
    position: "Engineer",
    salary: 12000,
  };
  employee12 = {
    name: "Krishna",
    position: "Engineer",
    salary: 25000,
  };
  employee13 = {
    name: "Radha",
    position: "Engineer",
    salary: 25000,
  };
  employee14 = {
    name: "Praveen",
    position: "Engineer",
    salary: 25000,
  };
  employee15 = {
    name: "Mohith",
    position: "Engineer",
    salary: 25000,
  };
  
  employees = [
    employee1,
    employee2,
    employee3,
    employee4,
    employee5,
    employee6,
    employee7,
    employee8,
    employee9,
    employee10,
    employee11,
    employee12,
    employee13,
    employee14,
    employee15,
  ];

//Task : increase the salary by 25%

employees.map(employee => {
    employee.salary *= 1.25
    console.log(employee)
})

let newSalaryList = employees.map(employee => employee['salary']*1.25);

console.log(newSalaryList);

//using reduce
//Task : find total of the increased salaries

let totalSal = newSalaryList.reduce( (Total , CurrEmpSal) => Total + CurrEmpSal )


//using filter

//task : Find the employees who has the salary less than 56000

let basicEMployees = employees.filter(
    employee => (employee['salary'] <=40000)
);

console.log(basicEMployees)

//Using Some
//Task : find if an employee has the salaray less than 15000

let isSalLessThan15 = employees.some(employee => employee['salary'] < 15000)

console.log("People has salaray less than 15k: ",isSalLessThan15)

if(isSalLessThan15){
    console.log(
        employees.filter(employee => employee['salary'] < 15000)
    )
}


//Using Every 
//Task : find the salaray have salary higher than 20k

let isSalLessMoreThan20 = employees.every(employee => employee["salary"]>100)
console.log(isSalLessMoreThan20)

///Using Find
//Task : getting the employee details with name "tharun"

console.log(employees.find(employee => employee['name'] == "Tharun"))

//using FindIndex

console.log(
    employees.findIndex(employee => employee['name'] == "Shiv")
)