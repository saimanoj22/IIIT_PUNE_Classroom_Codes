#include<iostream>
using namespace std;
template<typename T>
void swap(T* a,T* b)
{
    cout<<"Before swap :  "<<*a<<" and "<<*b<<endl;
    T t;
    t = *a;
    *a = *b;
    *b = t;
    cout<<"After swap : "<<*a<<" and "<<*b<<endl;
}
int main()
{
    int choice;
    cout << "===========TYPES===========\n";
    cout<<"1.int\n2.double\n3.char\n";
    cout << "==========================\n";
    cout<<"Enter choice of your datatype : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            int a,b;
            cout<<"Enter two numbers you want to swap\n";
            cout << "First one : ";
            cin >> a;
            cout << "Second one : ";
            cin>>b;
            swap<int>(&a,&b);
            break;
        }
        case 2:
        {
            double a,b;
            cout<<"Enter two double type you want to swap\n";
            cout << "First one : ";
            cin>>a;
            cout << "Second one : ";
            cin>>b;
            swap<double>(&a,&b);
            break;
        }case 3:
        {
            char a,b;
            cout<<"Enter 2 characters you want to swap\n";
            cout << "First one : ";
            cin>>a;
            cout << "Second one : ";
            cin>>b;
            swap<char>(&a,&b);
            break;
        }
    }
    return 0;
}