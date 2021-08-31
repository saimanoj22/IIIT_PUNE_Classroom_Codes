#include<iostream>
using namespace std;

int getArea(int x){
    return x * x;
}
int getArea(int x, int y){
    return x * y;
}
double getArea(double x){
    return 3.14 * x * x;
}
int main(){
    int side, length, breadth; 
    double radius;
    cout << "Enter side of square : ";
    cin >> side;
    cout << "Enter length and breadth of rectangle : ";
    cin >> length >> breadth;
    cout << "Enter radius of circle : ";
    cin >> radius;
    cout << "Area of square : " << getArea(side) << endl;
    cout << "Area of rectangle : " << getArea(length, breadth) << endl;
    cout << "Area of circle : " << getArea(radius) << endl;
    return 0;
}