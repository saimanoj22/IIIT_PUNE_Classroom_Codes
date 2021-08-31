#include<iostream>
using namespace std;

class Sample{
    int *p, odd = 0, even = 0;
    public:
    Sample(){
        p = new int[5];
        cout << "Enter elements of array : ";
        for(int i = 0; i < 5; i++){
            cin >> p[i];
            if(p[i] % 2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }
    }
    void show(){
        cout << "Number of even numbers : " << even << endl;
        cout << "Number of odd numbers : " << odd << endl;
    }
    ~Sample(){
        delete [] p;
        cout << "Destructor done";
    }
};

int main(){
    Sample s1;
    s1.show();
    return 0;
}