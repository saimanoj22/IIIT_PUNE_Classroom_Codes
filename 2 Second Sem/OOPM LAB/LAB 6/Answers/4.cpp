#include<iostream>
using namespace std;

class Vehicle{
    public:
        Vehicle(){
            cout << "This is a Vehicle\n";
        }
};

class Car : public Vehicle{
    public: 
        Car(){
            cout << "This is a Car\n";
        }
};

class Bike : public Vehicle{
    public:
        Bike(){
            cout << "This is a Bike\n";
        }
};

int main(){
    int n;
    cout << "\nEnter number of tyres : ";
    cin >> n;
    cout << "-----------------Vehicle Details----------------\n";
    if(n == 2){
        Bike b1;
    }
    else if(n == 4){
        Car c1;
    }
    else{
        Vehicle v1;
    }
    cout << "-------------------------------------------------\n";
    return 0;
}