num = int(input('Enter number of students: '))
stu_list = []
for i in range(num):
    stu_tuple = [input('Enter name of student %s: '%(i+1)), int(input('Enter age : ')), float(input('Enter height : '))]
    stu_list.append(tuple(stu_tuple))
print('\nStudents list    : ',stu_list)
print('\nSorted by NAME   : ', sorted(stu_list, key=lambda x: x[0]))
print('\nSorted by AGE    : ', sorted(stu_list, key=lambda x: x[1]))
print('\nSorted by HEIGHT : ', sorted(stu_list, key=lambda x: x[2]))