#include<iostream>
using namespace std;

int main(){
    float fahrenheit, celsius;
    cout << "\nEnter temperature in Fahrenheit : ";
    //Read fahrehheit temperature from user
    cin >> fahrenheit;
    //Converts fahrenheit into celsius
    celsius = (5.0 / 9.0) * (fahrenheit-32);
    //Displays temperature in celsius
    cout << "Temperature in Celsius : " << celsius << "\n\n";
    return 0;
}
