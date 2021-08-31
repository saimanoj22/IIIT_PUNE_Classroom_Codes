#include<iostream>
using namespace std;

#define SIZE 10

class Queue{
    int array[SIZE];
    int rear;
    int front;
    public:
    Queue(){
        rear = front = -1;
    }
    //declaring insert, delete, search and display functions
    void insert_q(int x);     
    int delete_q();
    void search_q(int x);
    void display_q();
};

//function to insert element to queue
void Queue :: insert_q(int x){
    if(front == -1) {
        front++;
    }
    if(rear == SIZE-1){
        cout << "Queue OVERFLOW\n";
    }
    else{
        array[++rear] = x;
    }
}

//function to remove element from queue
int Queue :: delete_q(){
    if(front > rear){
        cout << "Queue UNDERFLOW\n";
    }
    else{
        cout << "Deleted value from queue is " << array[front] << endl;
    }
    return array[++front];
}

//function to search for array element in queue
void Queue :: search_q(int x){
    int flag = 0;
    if(front == rear){
        cout << "The Queue is empty\n";
    }
    else{
        for(int i = front; i < SIZE; i++){
            if(array[i] == x){
                flag = 1;
                break;
            }
            else{
                flag = 0;
            }
        }
    }
    if(flag == 1){
        cout << "THE ELEMENT IS PRESENT IN THE QUEUE\n";
    }
    else{
        cout << "THE ELEMENT IS NOT PRESENT IN THE QUEUE\n";
    }
}

//function to display queue elements
void Queue :: display_q(){
    for(int i = front; i <= rear; i++){
        cout << array[i] << endl;
    }
}

int main(){
    Queue q1;
    int choice;
    //Menu of queue operations
    cout << "===================Menu===================\n";
    cout << "1. Insert element to queue\n";
    cout << "2. Delete element from queue\n";
    cout << "3. Search element in queue\n";
    cout << "4. Display elements of queue\n";
    cout << "5. EXIT\n";
    cout << "==========================================\n";
    while(1){
        cout << "\nEnter your choice to perform : ";
        cin >> choice;
        switch(choice)
        {
        case 1:
            int v;
            cout << "Enter value to insert : ";
            cin >> v;
            q1.insert_q(v);
            break;
        case 2:
            q1.delete_q();
            break;
        case 3:
            int h;
            cout << "Enter element to search in queue : ";
            cin >> h;
            q1.search_q(h);
            break;
        case 4:
            cout << "---Queue elements---\n";
            q1.display_q();
            cout << "--------------------\n";
            break;
        case 5:
            return 0;
        default:
            cout << "Enter valid choice...!!!\n";
            break;
        }
    }
    return 0;
}