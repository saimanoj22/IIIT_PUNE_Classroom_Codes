#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream my_file;
    //writing a file
    my_file.open("first.txt", ios::out);
    if(!my_file){
        cout << "File not found\n";
    }
    else{
        cout << "File found\n";
        cout << "Writing in file...\n";
        my_file << "This file is created by Sai Manoj Etcherla";
        cout << "Writing Completed\n";
        my_file.close();
    }
    //reading a file and printing its contents
    cout << "\nReading and Printing content of file...\n\n";
    my_file.open("first.txt", ios::in);
    if(!my_file){
        cout << "No such file is found\n";
    }
    else{
        string s;
        while(getline(my_file, s)){
            cout << s << endl;
            if(my_file.eof()) break;
        }
    }
    my_file.close();
    return 0;
}