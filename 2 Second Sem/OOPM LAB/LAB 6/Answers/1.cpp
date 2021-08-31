#include<iostream>
#include<cstring>
using namespace std;

class BasicInfo{
    public:
        string emp_name, gender;
        int emp_ID;
        void setBasicInfo(){
            cout << "Enter employee name : ";
            cin >> emp_name;
            cout << "Enter employee i.d. : ";
            cin >> emp_ID;
            cout << "Enter employee gender : ";
            cin >> gender;
        }
        void getBasicInfo(){
            cout << "Employee name : ";
            cout << emp_name << endl;
            cout << "Employee i.d. : ";
            cout << emp_ID << endl;
            cout << "Employee gender : ";
            cout << gender << endl;
        }
};

class DeptInfo{
    public:
        string dep_name;
        int depID;
        void setDeptInfo(){
            cout << "Enter department name : ";
            cin >> dep_name;
            cout << "Enter department i.d : ";
            cin >> depID;
        }
        void getDeptInfo(){
            cout << "Department name : ";
            cout << dep_name << endl;
            cout << "Department i.d : ";
            cout << depID << endl;  
        }
};

class Employee : public BasicInfo, public DeptInfo
{
    public:
        void getEmpInfo(){
            cout << "\n------------Employee Details------------\n";
            getBasicInfo();
            getDeptInfo();
            cout << "----------------------------------------\n";
        }
};

int main(){
    Employee e1;
    e1.setBasicInfo();
    e1.setDeptInfo();
    e1.getEmpInfo();
    return 0;
}