from tkinter import *

listN = []
listE = []
listB = []
listM = []
listS = []
listR = []
def clear():
    file = open("C:\\Users\\DELL\\OneDrive\\Desktop\\Labs\\lab_6.txt", "w")
    file.close()
    print("cleared")
def search():
   n=input7.get()
   for x in listN:
      if(x == input7.get()):
          print("found")
          ind=listN.index(x)
          print("Name: ",listN[ind])
          print("Email: ",listE[ind])
          print("Branch: ",listB[ind])
          print("MIS: ",listM[ind])
          print("Semester: ",listS[ind])
          print("Result: ",listR[ind])
   if(n not in listN):
      print("notfound")
def save():
    file = open("C:\\Users\\DELL\\OneDrive\\Desktop\\Labs\\lab_6.txt" ,"at")
    file.write("Name = "+input1.get()+"\n")
    listN.append(input1.get())
    file.write("Email = " + input2.get()+"\n")
    listE.append(input2.get())
    file.write("Branch = " + input3.get() + "\n")
    listB.append(input3.get())
    file.write("MIS = " + input4.get() + "\n")
    listM.append(input4.get())
    file.write("Semester = " + input5.get() + "\n")
    listS.append(input5.get())
    file.write("Result = " + input6.get() + "\n")
    listR.append(input6.get())
    print("saved")


root = Tk()
root.title("form")
l = Label(text="USER DETAILS", fg="black")
l.grid(row=0, column=5)
label1 = Label(text="Name", fg="red")
label1.grid(row=4, column=0)
input1 = Entry(root, width=50)
input1.grid(row=4, column=1)
label2 = Label(text="Email", fg="red")
label2.grid(row=5, column=0)
input2 = Entry(root, width=50)
input2.grid(row=5, column=1)
label3 = Label(text="Branch", fg="red")
label3.grid(row=6, column=0)
input3 = Entry(root, width=50)
input3.grid(row=6, column=1)
label4 = Label(text="MIS number", fg="red")
label4.grid(row=7, column=0)
input4 = Entry(root, width=50)
input4.grid(row=7, column=1)
label5 = Label(text="Semester", fg="red")
label5.grid(row=8, column=0)
input5 = Entry(root, width=50)
input5.grid(row=8, column=1)
label6 = Label(text="Result", fg="red")
label6.grid(row=9, column=0)
input6 = Entry(root, width=50)
input6.grid(row=9, column=1)
b1 = Button(root, text="save", command=save, bg="grey")
b1.grid(row=15, column=0)
b3 = Button(root, text="clear", command=clear, bg="grey")
b3.grid(row=15, column=4)
input7 = Entry(root,width = 50)
input7.grid(row = 22, column = 1)
b2 = Button(root, text="Search", command=search, bg="grey")
b2.grid(row=22, column=2)



root.mainloop()