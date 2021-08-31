#include<iostream>
using namespace std;

#define SIZE 10

class CQueue{
    int array[SIZE];
    int rear;
    int front;
  
    public:
    CQueue(){
        rear = front = -1;
    }
    
    //function to check if queue is full
    bool isFull(){
        if(front == 0 && rear == SIZE - 1){
            return true;
        }
        if(front == rear + 1) {
            return true;
        }
        return false;
    }
    
    //function to check if queue is empty
    bool isEmpty(){
        if(front == -1) {
            return true;
        }
        else {
            return false;
        }
    }
    //declaring insert_q, delete_q, display_q and size functions
    void insert_q(int x);     
    int delete_q();
    void display_q();
    int size();
};

// function to insert element to queue
void CQueue :: insert_q(int x){
    if(isFull()){
        cout << "Queue is full";
        cout << "Queue OVERFLOW" << endl;
    } 
    else{
        if(front == -1){   
            front = 0;
        }
        rear = (rear + 1) % SIZE;
        // inserting the element
        array[rear] = x;
    }
}

// function to delete element from queue
int CQueue :: delete_q()
{
    int y;
    if(isEmpty()){
        cout << "Queue is empty" << endl;
        cout << "Queue UNDERFLOW" << endl;
        return 0;
    } 
    else{
        y = array[front];
        cout << "Deleted value from the queue is " << y << endl;
        if(front == rear){
            // only one element in queue, reset queue after removal
            front = -1;
            rear = -1;
        }
        else{
            front = (front+1) % SIZE;
        }
        //cout << "Deleted value from the queue is " << array[front];
        return(y);
    }
}

// function to display elements of Circular Queue 
void CQueue :: display_q()
{
    int i;
    if(isEmpty()) {
        cout << "Empty Queue" << endl;
    }
    else{
        cout << "Front -> " << front;
        cout << "\nElements -> ";
        for(i = front; i != rear; i= (i+1) % SIZE){
            cout << array[i] << "\t";
        }
        cout << array[i];
        cout << "\nRear -> " << rear << endl;
    }
}

int CQueue :: size()
{
    if(rear >= front){
        return (rear - front) + 1;
    }
    else{
        return (SIZE - (front - rear) + 1);
    }
}

int main()
{
    CQueue q1;
    int choice;
    //Menu of queue operations
    cout << "===================Menu===================\n";
    cout << "1. Insert element to queue\n";
    cout << "2. Delete element from queue\n";
    cout << "3. Display elements of queue\n";
    cout << "4. EXIT\n";
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
            cout << "---Queue elements---\n";
            q1.display_q();
            cout << "--------------------\n";
            break;
        case 4:
            return 0;
        default:
            cout << "Enter valid choice...!!!\n";
            break;
        }
    }
    return 0;
}