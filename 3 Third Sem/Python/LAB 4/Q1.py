class Employee:
    def __init__(self, name, id, designation):
        self.n = name
        self.i = id
        self.d = designation

class TechnicalOfficer(Employee):
    salary = '52,000 (40,000+4000+8000)'

class Manager(Employee):
    salary = '39,000 (30,000+3000+6000)'

class SoftwareAssociate(Employee):
    salary = '26,000 (20,000+2000+4000)'

Employee_list= []
total = 0
for i in range(10):
    name = input('Enter employee name : ')
    id = input('Enter employee id : ')
    designation = input('Enter employee designation : ')
    if(designation == 'Technical Officer'):
        Employee_list.append(TechnicalOfficer(name, id, designation))
        total += 52000
    elif(designation == 'Manager'):
        Employee_list.append(Manager(name, id, designation))
        total += 39000
    elif(designation == 'Software Associate'):
        Employee_list.append(SoftwareAssociate(name, id, designation))
        total += 26000
for i in Employee_list:
    print(f'NAME : {i.n}---ID : {i.i}---DESIGNATION : {i.d}---SALARY : {i.salary}\n')
print('\nTotal salry of employees : ', total)

print('\n---SEARCH FOR A EMPLOYEE---')
emid = input('Enter employee id : ')
for i in Employee_list:
    if i.i == emid:
        print("Employee found.\nDetails of Employee : ")
        print('NAME : ', i.n)
        print("ID : ", i.i)
        print("DESIGNATION : ", i.d)
        print("SALARY : ", i.salary)
        