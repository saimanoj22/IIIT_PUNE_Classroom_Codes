#include <iostream>
using namespace std;

int main() {
    string str;
    string temp = "";
    cout << "------------------------------------------\n";
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.size(); ++i) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')) {
            temp = temp + str[i];
        }
    }
    str = temp;
    for(int i = 0; i < str.size(); ++i){
        if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
    }
    cout << "\nFinal String : " << str << endl;
    int length = str.length(), flag = 0;
    for(int i = 0; i < str.size(); ++i){
        if(str[i] != str[length-i-1]){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << "\nThe string is not a PALINDROME\n";
    }
    else{
        cout << "\nThe string is a PALINDROME\n";
    }
    cout << "------------------------------------------\n";
    return 0;
}