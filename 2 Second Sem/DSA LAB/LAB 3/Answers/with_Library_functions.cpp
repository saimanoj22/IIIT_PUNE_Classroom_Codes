#include<iostream>
#include<cstring>
using namespace std;

void stringLen(char a[]){
    cout << "The length of first string : " << strlen(a);
}

void stringCopy(char a[], char b[]){
    strcpy(b,a);
    cout << "String 1 : " << a << endl;
    cout << "String 2 : " << b << endl;
    cout << "First string is copied into Second string";
}

void stringConcatenation(char a[], char b[]){
    strcat(a,b);
    cout << a;
}

void stringReverse(char a[]){
    cout << "The reverse of String : " << strrev(a) << endl;
}

void stringPalindrome(char a[]){
    char b[50];
    strcpy(b,a);
    strrev(b);
    int check = strcmp(a,b);
    if(check == 0) cout << "The string entered is a Palindrome.";
    else cout << "The string is not a Palindrome.";
}

void stringCompare(char a[], char  b[]){
    int check = strcmp(a,b);
    if(check == 0) cout << "Strings are equal";
    if(check < 0) cout << "String 1 is greater than String 2";
    if(check > 0) cout << "String 1 is less than String 2";
}

int Substring(char a[], char b[]){
    int count = 0,sub_len = strlen(b);
    char *mainstr = a;
    char *substr = b;
    if(sub_len){
        while(mainstr = strstr(mainstr,substr)){
            mainstr = mainstr + sub_len;
            count++;
        }
    }
    //cout << count;
    return count;
}

int main(){
    cout << "\n***MENU FOR STRING OPERATIONS***\n" << endl;
    cout << "1. String Length\n2. String Copy\n3. String Concatenation\n4. String Reverse\n";
    cout << "5. String Palindrome\n6. String Compare\n7. Substring\n" << endl;
    cout << "Select which operation you want to perform : ";
    int choice;
    cin >> choice;
    char str1[50], str2[50];
    cout << "\nEnter a string : ";
    cin >> str1;
    switch (choice)
    {
    case 1:
        stringLen(str1);
        break;
    case 2:
        stringCopy(str1,str2);
        break;
    case 3:
        cout << "Enter another string : ";cin >> str2;
        stringConcatenation(str1, str2);
        break;
    case 4:
        stringReverse(str1);
        break;
    case 5:
        stringPalindrome(str1);
        break;
    case 6:
        cout << "Enter another string : ";cin >> str2;
        stringCompare(str1, str2);
        break;
    case 7:
        cout << "Enter sub string : ";cin >> str2;
        cout << "The substring occurred " << Substring(str1, str2);
        cout << " times in main string" << endl;
        break;
    default:
        cout << "Enter a valid choice" << endl;
        break;
    }
    return 0;
}