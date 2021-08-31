#include<iostream>
using namespace std;

void cprint(int c){
    //prints C's in pattern
    for(int a = 0; a < c; a++)cout << "C";
}
void plusprint(int plus){
    //prints +'s in pattern
    for(int a = 0; a < plus; a++)cout << "+";
}
int main(){
    int c, plus;
    cout << "\n";
    for(int i = 1; i <= 6; i++){
        if(i==1 || i==6) c = 9, plus = 2;
        if(i==2 || i==5) c = 2, plus = 2;
        if(i==3 || i==4) c = 2, plus = 14;
        //C's printing function
        cprint(c);
        //prints identation or spacing
        if(i==2||i==5)          cout << "\t      ";
        else if(i==1 || i==6)   cout << "     ";
        else                    cout << "\t";
        //+'s printing function
        plusprint(plus);
        //prints identation or spacing
        if(i==3 || i==4)        cout << "\t";
        else                    cout << "\t      ";
        //+'s printitng function for second time
        plusprint(plus);
        cout << endl;
    }
    cout << "\n";
    return 0;
}
