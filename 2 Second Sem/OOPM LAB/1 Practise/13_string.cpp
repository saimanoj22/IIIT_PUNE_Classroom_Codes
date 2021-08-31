#include<iostream>
using namespace std;

int main(){
    char string[] = "Hello world 123456";
    int vowels = 0, consonants = 0, spaces = 0, digits = 0;
    for(int i = 0; string[i] != '\0'; i++){
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' ||string[i]=='o' || string[i]=='u' || string[i]=='A' ||string[i]=='E' || string[i]=='I' || string[i]=='O' ||string[i]=='U'){
            vowels++;
        }
        else if((string[i]>='a'&& string[i]<='z') || (string[i]>='A'&& string[i]<='Z'))
        {
            consonants++;
        }
        else if(string[i]>='0' && string[i]<='9')
        {
            digits++;
        }
        else if (string[i]==' ')
        {
            spaces++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "White spaces: " << spaces << endl;
    return 0;
}