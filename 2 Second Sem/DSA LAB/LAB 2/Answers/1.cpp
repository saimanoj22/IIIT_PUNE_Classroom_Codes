#include<iostream>
using namespace std;

int main(){
    float amount, income_tax, state_tax, securtiy_tax, medicare_tax, pension_plan;
    cout << "\nEnter Gross payment amount : ";
    cin >> amount;
    //displays individual tax deductions
    cout << "\n--------------------------------------------------------------------------\n";
    cout << "Taxes\t\tDeduction amount\n" << endl;
    cout << "Income tax\t\t" << 0.10*amount << endl;
    cout << "State tax\t\t" << 0.03*amount << endl;
    cout << "Social securtiy tax\t" << 0.02*amount << endl;
    cout << "Medicare tax\t\t" << 0.0278*amount << endl;
    cout << "Pension plan\t\t" << 0.06*amount << endl;
    cout << "\n\nTotal amount deduced as tax : " << 0.10*amount+0.03*amount+0.02*amount+0.0278*amount+0.06*amount << endl;
    //calculate total payment amount after tax deductions;
    cout << "The total payment to the worker after following tax deductions : ";
    cout << amount - (0.10*amount) - (0.03*amount) - (0.02*amount) - (0.0278*amount) - (0.06*amount) << endl;
    cout << "--------------------------------------------------------------------------\n\n";
    return 0;
}
