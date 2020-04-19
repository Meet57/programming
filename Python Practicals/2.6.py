"""
WAP to calculate the salary of an employee based on following conditions (nested if-else):
1. if degree = B.E. and experience < 5 years, salary=30000
2. if degree = B.E. and experience >= 5 years, salary=40000
3. if degree = M.E. and experience < 5 years, salary=50000
4. if degree = M.E. and experience >= 5 years, salary= 60000
"""

def salary(degree,experience):
    if degree == "B.E.":
        if experience >= 5:
            return 40000
        else:
            return 30000
    elif degree == "M.E.":
        if experience >= 5:
            return 60000
        else:
            return 50000
    else:
        return 0

print(salary("B.E.",3))
print(salary("B.E.",8))
print(salary("M.E.",1))
print(salary("M.E.",9))