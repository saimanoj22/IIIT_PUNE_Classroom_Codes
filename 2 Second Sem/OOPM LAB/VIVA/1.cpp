// Convert a whole string into UPPERCASE irrespective of original form
#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

void convert(string str2){
    for(int i = 0; str2[i] != '\0'; i++){
        if(islower(str2[i])){
            str2[i] = toupper(str2[i]);
        }
    }
    cout << "Converted string : " << str2 << endl;
}

int main(){
    string str;
    cout << "Enter a string : ";
    cin >> str;
    string &str2 = str;
    convert(str2);
    return 0;
}