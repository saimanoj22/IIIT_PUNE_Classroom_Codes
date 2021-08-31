
#include<iostream>
#include<stdlib.h>
using namespace std;

class poly {
public:
    int *coefficient, degree;
    //function declaration
    int getdata();
    int display(int *coefficient, int degree);
    void addition(poly p1, poly p2);
    void substraction(poly p1, poly p2);
    void multiplication(poly p1, poly p2);
};

int poly::display(int *coefficient, int degree) {
    int i, j;
    for (i = degree; i >= 0; i--) {
        if(coefficient[i] >= 0) cout << coefficient[i] << "x^" << i;
        else cout << "(" <<coefficient[i] << ")" << "x^" << i;
        if ((i - 1) != -1)
            cout << "+";
    }
    cout << "\n";
    return 0;
}

int poly::getdata() {
    int i;
    cout << "Enter Degree Of Polynomial:";
    cin >> degree;
    coefficient = new int[degree + 1];
    for (i = degree; i >= 0; i--) {
        cout << "Enter coefficient of x^" << i << ":";
        cin >> coefficient[i];
    }

    return 0;
}

void poly::addition(poly p1, poly p2) {
    int max, i;
    max = (p1.degree > p2.degree) ? p1.degree : p2.degree;
    int *sum = new int[max + 1];
    if (p1.degree == p2.degree) {
        for (i = p1.degree; i >= 0; i--)
            sum[i] = p1.coefficient[i] + p2.coefficient[i];
    }

    if (p1.degree > p2.degree) {
        for (i = p1.degree; i > p2.degree; i--)
            sum[i] = p1.coefficient[i];
        for (i = p2.degree; i >= 0; i--)
            sum[i] = p1.coefficient[i] + p2.coefficient[i];
    }

    if (p1.degree < p2.degree) {
        for (i = p2.degree; i > p1.degree; i--)
            sum[i] = p2.coefficient[i];
        for (i = p1.degree; i >= 0; i--)
            sum[i] = p1.coefficient[i] + p2.coefficient[i];
    }
    cout << "\nAddition:";
    display(sum, max);
    cout << "\n";
}

void poly::substraction(poly p1, poly p2) {
    int max, i;
    max = (p1.degree > p2.degree) ? p1.degree : p2.degree;
    int *diff = new int[max + 1];
    if (p1.degree == p2.degree) {
        for (i = p1.degree; i >= 0; i--)
            diff[i] = p1.coefficient[i] - p2.coefficient[i];
    }

    if (p1.degree > p2.degree) {
        for (i = p1.degree; i > p2.degree; i--)
            diff[i] = p1.coefficient[i];
        for (i = p2.degree; i >= 0; i--)
            diff[i] = p1.coefficient[i] - p2.coefficient[i];
    }

    if (p1.degree < p2.degree) {
        for (i = p2.degree; i > p1.degree; i--)
            diff[i] = -p2.coefficient[i];
        for (i = p1.degree; i >= 0; i--)
            diff[i] = p1.coefficient[i] - p2.coefficient[i];
    }
    cout << "\nSubstraction:";
    display(diff, max);
    cout << "\n";
}

void poly::multiplication(poly p1, poly p2) {
    int i, j, max;
    max = p1.degree + p2.degree;
    int *product = new int[max + 1]{0};

    for (i = p1.degree; i >= 0; i--)
        for (j = p2.degree; j >= 0; j--)
            product[i + j] += p1.coefficient[i] * p2.coefficient[j];
    cout << "\nMultiplication:";
    display(product, max);
}

int main() {
    int choice;
    poly p1, p2, p3;
    cout << "Enter Polynomial 1:-" << endl;
    p1.getdata();
    cout << "Enter Polynomial 2:-" << endl;
    p2.getdata();

    while (1) {
        cout << "\n****** Menu Selection ******" << endl;
        cout << "1: Addition\n2: Substraction\n3: Multiplication\n0: Exit" << endl;
        cout << "Enter your choice:";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "\n--------------- Addition ---------------\n";
                cout << "Polynomial 1:";
                p1.display(p1.coefficient, p1.degree);
                cout << "Polynomial 2:";
                p2.display(p2.coefficient, p2.degree);
                p3.addition(p1, p2);
                cout << "----------------------------------------\n";
                break;
            case 2:

                cout << "\n------------- Substraction -------------\n";
                cout << "Polynomial 1:";
                p1.display(p1.coefficient, p1.degree);
                cout << "Polynomial 2:";
                p2.display(p2.coefficient, p2.degree);
                p3.substraction(p1, p2);
                cout << "----------------------------------------\n";
                break;
            case 3:
                cout << "\n----------- Multiplication -------------\n";
                cout << "Polynomial 1:";
                p1.display(p1.coefficient, p1.degree);
                cout << "Polynomial 2:";
                p2.display(p2.coefficient, p2.degree);
                p3.multiplication(p1, p2);
                cout << "----------------------------------------\n";
                break;
            case 0:
                return 0;
            default:
                cout << "\n----------- Enter a valid choice -------------\n";
        }
    }
    return 0;
}