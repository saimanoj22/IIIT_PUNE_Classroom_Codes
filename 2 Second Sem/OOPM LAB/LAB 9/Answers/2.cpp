#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string name, designation, dob, salary;
    cout << "Enter employee name : ";
    cin >> name;
    cout << "Enter employee designation : ";
    cin >> designation;
    cout << "Enter employee date of birth (dd/mm/yy) : ";
    cin >> dob;
    cout << "Enter employee salary(per month) : ";
    cin >> salary;
    fstream my_file;
    //writing a file
    my_file.open("Emp.txt", ios::out);
    if(!my_file){
        cout << "File not found\n";
    }
    else{
        cout << "\nFile found\n";
        cout << "Wrinting employee details in file...\n";
        my_file << "Employee name : " << name << "\n";
        my_file << "Employee designation : " << designation << "\n";
        my_file << "Employee date of birth(dd/mm/yy) : " << dob << "\n";
        my_file << "Employee salary : " << salary;
        cout << "Writing completed\n";
        my_file.close();
    }
    //reading a file and printing its contents
    cout << "\nReading and Printing content of file...\n";
    cout << "------------------------------------------\n";
    my_file.open("Emp.txt", ios::in);
    if(!my_file){
        cout << "No such file is found\n";
    }
    else{
        string s;
        while(getline(my_file, s)){
            cout << s << endl;
            if(my_file.eof()) break;
        }
    }
    cout << "------------------------------------------\n";
    my_file.close();
    return 0;
}