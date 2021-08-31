#include <bits/stdc++.h>
using namespace std;

int main()
{
    //division with zero
    int a = 2;
    int b = 2;
    int c = 5;
    try
    {
        if(a-b != 0){
            float d = c / (a-b);
        }
        else{
            throw (a-b);
        }
    }
    catch (int x){
        cout << "\nException caught for (a-b)" << endl;
    }
    //square root of negative number
    int t = -2;
    try{
        if(t > 0){
            float e = sqrt(t);
        }
        else{
            throw t;
        }
    }
    catch (int y){
        cout << "\nException caught for t\n" << endl;
    }
    return 0;
}