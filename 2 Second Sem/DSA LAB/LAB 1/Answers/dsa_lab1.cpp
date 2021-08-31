#include<iostream>
using namespace std;

struct student
{
    char name[50];
    float marks;
};

int main(){
    long long intn;
    cout << "\nEnter number of students : ";
    cin >> n;
    student s[n];
    long long intsum = 0, max_score = 0;
    cout << "\nEnter name of the student and his respective marks\n\n";
    for(long long inti = 0; i < n; i++){
        cout << "Enter name of Student " << i+1 << " :  ";
        cin >> s[i].name;
        cout << "Enter marks of Student " << i+1 << " :  ";
        cin >> s[i].marks;
        //calculates sum of marks
        sum += s[i].marks;
        //calculates highest examination score
        if(max_score <= s[i].marks){
            max_score = s[i].marks;      
        }
    }

    //calculate average of examination marks
    float average = sum / (float) n;
    cout << "\n---------------------------------------------------------\n";
    cout << "\nThe average of examination marks is : " << average << "\n";

    //prints names of students who scored below average examination mark
    cout << "\n---------------------------------------------------------\n";
    cout << "\nStudents who got marks below average" << "\n";
    for(long long inti = 0; i < n; i++){
        if(s[i].marks < average){
            cout << s[i].name << "\t" << s[i].marks << "\n";
        }
    }
    
    //prints highest examination score
    cout << "\n---------------------------------------------------------\n";
    cout << "\nThe highest examination score is : " << max_score << "\n";

    //prints names of students whose examination score is same as highest examination score
    cout << "\n---------------------------------------------------------\n";
    cout << "\nStudents who scored highest marks in the examination" << "\n";
    for(long long int i = 0; i < n; i++){
        if(s[i].marks == max_score){
            cout << s[i].name << "\t" << s[i].marks << "\n";
        }
    }
    cout << "\n---------------------------------------------------------\n";
    return 0;
}
