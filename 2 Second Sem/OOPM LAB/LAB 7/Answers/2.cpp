#include<iostream>
#include<cstring>
using namespace std;

class Account_Details{
    public:
        string client_name;
        int acc_no;
        double curr_bal;
        double withdraw_amount, deposit_amount;
        void create(){
            cout << "Enter your name : ";
            cin >> client_name;
            cout << "Enter your account number :";
            cin >> acc_no;
            cout << "Enter your current balance :";
            cin >> curr_bal;
        }
        void deposit_money(){
            double deposit_amount;
            cout << "Enter amount you want to deposit : ";
            cin >> deposit_amount;
            curr_bal = curr_bal + deposit_amount;
            cout << "Your current balance : " << curr_bal << endl;
        }
        void withdraw_money(){
            double withdraw_amount;
            cout << "Enter amount you want to withdraw : ";
            cin >> withdraw_amount;
            curr_bal = curr_bal - withdraw_amount;
            cout << "Your current balance : " << curr_bal << endl;
        }
        void display(){
            cout << "*************DETAILS****************\n";
            cout << "Enter your name : " <<  client_name << endl;
            cout << "Enter your account number :" <<  acc_no << endl;
            cout << "Enter your current balance :" <<  curr_bal << endl;
            cout << "*************************************\n";
        }
};

class Regular : public Account_Details{

};

class VIP : public Account_Details{
    public:
        double upper_limit, interest, pending;
        VIP(){
            upper_limit = 500;
            interest = 11.125;
        }
        virtual void create(){
            Account_Details::create();
            cout << "Enter upper-limit to loan : ";
            cin >> upper_limit;
            cout << "Enter simple interest to loan : ";
            cin >> interest;
        }
        virtual void withdraw_money(){
            int time;
            cout << "Enter money you want to withdraw : ";
            cin >> withdraw_amount;
            if(curr_bal < withdraw_amount){
                if(withdraw_amount - curr_bal <= upper_limit){
                    cout << "Enter time period to return loan : ";
                    cin >> time;
                    pending = (withdraw_amount - curr_bal) + ((withdraw_amount-curr_bal) * time * interest)/100;
                }
                else{
                    cout << "Difference amount is greater than Upper-limit exceeded";
                }
            }
            else{
                pending = 0;
            }
            curr_bal = curr_bal - withdraw_amount;
        }
        virtual void display(){
            Account_Details::display();
            cout << "Pending amount to pay : " << pending << endl;
        }
};

int main(){
    cout << "--------------Regular----------------\n";
    Regular r;
    r.create();
    r.deposit_money();
    r.withdraw_money();
    r.display();
    cout << "--------------------------------------\n\n";
    cout << "----------------VIP-------------------\n";
    VIP v;
    v.create();
    v.deposit_money();
    v.withdraw_money();
    v.display();
    cout << "---------------------------------------\n\n";
    
    return 0;
}