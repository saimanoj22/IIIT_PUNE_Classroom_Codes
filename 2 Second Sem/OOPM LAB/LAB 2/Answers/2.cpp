#include<iostream>
using namespace std;

class Sam
{   
    int a,b;
    void add(){
        cout << "Sum of Two numbers : " << a+b;
    }
    public:
    void getdata(){
        cout << "Enter two numbers : ";
        cin >> a; cin >> b;
    }
    friend class Tom;
};

class Tom
{
    public:
    void access(Sam x){
        x.add();
    }
};

void add(){

}

int main(){
    Sam s; Tom t;
    s.getdata();
    t.access(s);
    return 0;
}