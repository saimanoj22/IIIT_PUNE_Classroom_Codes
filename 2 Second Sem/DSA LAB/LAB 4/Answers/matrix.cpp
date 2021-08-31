#include<iostream>
using namespace std;

void upperTri(int *p, int rows, int columns){
    cout << "----------------------------------------------------------\n";
    // Matrix can have only triangular if it is a square matrix
    if(rows == columns){
        int flag;
        // Checking elements which has to be zero
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < i; j++){
                if(*((p+i*columns)+j) != 0) flag = 0;
                else flag = 1;
            }
        }
        if (flag == 1){
            cout << "The matrix is a Upper Triangular Matrix" << endl;
        }
        else{
            cout << "The matrix is not a Upper Triangular Matrix" << endl;
        }
    }
    // Not a square matrix
    else{
        cout << "The matrix is a rectangular matrix. Triangular matrix does not exist." << endl;
    }
    cout << "----------------------------------------------------------\n\n";
}

void diasum(int *p, int rows, int columns){
    cout << "----------------------------------------------------------\n";
    // Diagonal is defined for only square matrix
    if(rows == columns){
        int sum = 0;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < columns; j++){
                // Diagonal elemants exist in same row and column
                if(i == j){
                    sum = sum + *((p+i*columns)+j);
                }
            }
        }
        cout << "Sum Of Diagonal elements : " << sum << endl;;
    }
    // Not a square matrix
    else{
        cout << "The matrix is a rectangular matrix. Diagonal does not exist." << endl;
    }
    cout << "----------------------------------------------------------\n\n";
}
void transpose(int *p, int rows, int columns){
    cout << "----------------------------------------------------------\n";
    // Define a transpose matrix with opposite order
    int transpose[columns][rows];
    // Reading transpose matrix 
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            transpose[j][i] = *((p+i*columns)+j);
        }
    }
    // Disaplay transpose matrix
    cout << "Tranpose of the matrix is : " << endl;
    for(int i = 0; i < columns; i++){
        for(int j= 0; j < rows; j++){
            cout << transpose[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "----------------------------------------------------------\n\n";
}
void operations(int *p, int rows, int columns){
    // Define another matrix for addition, subtraction and multiplication operations
    int rowsB, columnsB;
    cout << "Enter number of rows and columns in matrix 2: ";
    cin >> rowsB >> columnsB;
    int matrix_B[rowsB][columnsB];
    // Reading another matrix
    cout << "Enter elments of matrix 2" << endl;
    for(int  i = 0; i < rowsB; i++){
        cout << "Row " << i+1  << ":  ";
        for(int j = 0; j < columnsB; j++){
            cin >> matrix_B[i][j];
        }
    }
    cout << "\n----------------------------------------------------------\n";
    // For Addition and subtraction, both matrices must have same order
    if(rows == rowsB && columns == columnsB){
        cout << "Addition of two matixes is :" << endl;
        for(int i = 0; i < rows; i++){
            for(int  j = 0; j < columns; j++){
                cout << *((p+i*columns)+j) + matrix_B[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "----------------------------------------------------------\n";
        cout << "Subtraction of two matixes is :" << endl;
        for(int i = 0; i < rows; i++){
            for(int  j = 0; j < columns; j++){
                cout << *((p+i*columns)+j) - matrix_B[i][j]<< " ";
            }
            cout << "\n";
        }
    }
    // Don't have same order
    else{
        cout << "Addition and Subtraction is not possible" << endl;
    }
    cout << "----------------------------------------------------------\n\n";
    // For mulitiplication, number of columns of first matrix should be equal to rows of second matrix
    cout << "----------------------------------------------------------\n";
    if(columns == rowsB){
        int sum = 0;
        cout << "Multiplication of two matrices is : " << endl;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < columnsB; j++){
                for(int k = 0; k < rowsB; k++){
                    sum = sum + *((p+i*columns)+k) * matrix_B[k][j];
                }
                cout << sum << " ";
                sum = 0;
            }
            cout << "\n";
        }
    }
    else{
        cout << "Multiplication is not possible" << endl;
    }
    cout << "----------------------------------------------------------\n";
}

int main(){
    int rows, columns;
    cout << "Enter number of rows and columns in matrix : ";
    cin >> rows >> columns;
    int matrix[rows][columns];
    // Taking input a matrix
    cout << "Enter elments of matrix " << endl;
    for(int  i = 0; i < rows; i++){
        cout << "Row " << i+1  << ":  ";
        for(int j = 0; j < columns; j++){
            cin >> matrix[i][j];
        }
    }
    upperTri((int *)matrix, rows, columns);
    diasum((int *)matrix, rows, columns);
    transpose((int *)matrix, rows, columns);
    operations((int *)matrix, rows, columns);
    return 0;
}