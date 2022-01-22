def getdata():
    empId = input("Enter Emp.Id : ")
    empName = input("Enter Name : ")
    emailId = input("Enter Email.Id : ")
    dept = input("Enter Department : ")
    designation = input("Enter Designation : ")
    basic = int(input("Enter BASIC salary : "))
    DA = int(input("Enter DA : "))
    HRA = int(input("Enter HRA : "))

    file1 = open('Emp_info.txt','a')
    file1.write(empId + " " + empName + " " +" "+ emailId + "\n")
    file1.close()
    
    file2 = open('Department_info.txt','a')
    file2.write(empId + " " + dept + " " + designation + "\n")
    file2.close()

    file3 = open('Empsal.txt','a')
    file3.write(empId + " " + str(basic) + " " + str(DA) + " " + str(HRA) + "\n")
    file3.close

def searchdata():
    key = input("Enter Name to search : ")
    file1 = open('Emp_info.txt','r')
    readlines = file1.readlines()
    for line in readlines:
        if key in line:
            list1 = line.split()
    
    empyoid = list1[0]
    file2 = open('Department_info.txt','r')
    readlines = file2.readlines()
    for line in readlines:
        if empyoid in line:
            list2 = line.split()
    
    file3 = open('Empsal.txt','r')
    readlines = file3.readlines()
    for line in readlines:
        if empyoid in line:
            list3 = line.split()
    print("Employee details : ")
    print(f'{"Emp.Id":^20}{"Name":^20}{"Email.Id":^20}{"Department":^20}{"Designation":^20}{"Basic salary":^20}{"DA":^20}{"HRA":^20}')
    print(f'{list1[0]:^20}{list1[1]:^20}{list1[2]:^20}{list2[1]:^20}{list2[2]:^20}{list3[1]:^20}{list3[2]:^20}{list3[3]:^20}')

flag = True
print("==========MENU============")
print("1.Enter data\n2.Search data\n3.Exit")
print("==========================")
while (flag):
    choice = int(input("\nEnter choice : "))
    if choice == 1:
        getdata()
    elif choice == 2:
        searchdata()
    else:
        flag = False