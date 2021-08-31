#include<iostream>
using namespace std;
template<class T>
class Stack{
    int top; 
    int top_most; 
    T *S; 
    public:
            Stack(int max_size);
            ~Stack(){
                delete[] S;
            }
            int is_empty()const{
                return top==-1;
            }
            int is_full()const{
                return top==top_most;
            }
            T peek()const;
            void push(T);
            T pop();
            void display();
};

template<class T>
Stack<T>::Stack(int max_size)
{
        top_most=max_size-1;
        S=new T[max_size];
        top=-1;
}

template<class T>
T Stack<T>::peek()const
{
        if(is_empty()) 
            return 0;
        else
            return S[top];
}

template<class T>
void Stack<T>::push(T x)
{
        if(is_full())
            cout<<"Stack is full\n"; //add fails
        else
        {
            S[++top]=x;
        }
}

template<class T>
T Stack<T>::pop()
{
        T x;
        if(is_empty())
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        else
        {
            x=S[top--];
            return x;
        }
}

template<class T>
void Stack<T>::display()
{
        if(is_empty())
            cout<<"Out of bounds"; //delete fails
        else
            cout << "Elements of stack : ";
            for(int i=top;i>=0;i--)
            {
                cout<<S[i]<<" ";
            }
            cout << "\n";
}

int main()
{
    Stack<int>obj(5);
    int ch,x;

    cout << "===========MENU===========\n";
    cout<<"1.push\n2.pop\n3.peek\n4.display\n5.Exit\n";
    cout << "==========================\n";

    while(1){
        cout<<"\nEnter the choice : ";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"Enter a value to push into the stack : ";
                cin>>x;
                obj.push(x);
                break;
            case 2:
                x=obj.pop();
                if(x!=-1)
                        cout<<"Poped value is : "<<x<<endl;
                break;
            case 3:
                x=obj.peek();
                cout<<"Top most value is : "<<x<<endl;
                break;
            case 4:
                obj.display();
                break;
            case 5:
                return 0;
                break;
            default:
                cout << "Enter valid choice...!\n";
                break;
        }
    }
return 0;
}