#include<iostream>
using namespace std;

class Matrix
{
    public:
    int matrix[5], flag, sum = 0;
    int insertValue(){
        cout << "Enter elements of Matrix : ";
        for(int i = 0; i < 5; i++){
            cin >> matrix[i];
        }
        return 0;
    }
    int searchElement(int x){
        cout << "Enter Element : ";
        cin >> x;
        for(int i = 0; i < 5; i++){
            if(x == matrix[i]){
                cout << "Index of element :  " << i << endl;
                return 0;
            }
        }
        cout << "Not Found" << endl;
        return 0;
    }
    int addAllElements(){
        for(int i = 0; i < 5; i++){
            sum += matrix[i];
        }
        cout << "Total sum of Elements in Matrix : " << sum;
        return 0;
    }
};
int main(){
    Matrix m1;
    int x;
    m1.insertValue();
    m1.searchElement(x);
    m1.addAllElements();
    return 0;
}