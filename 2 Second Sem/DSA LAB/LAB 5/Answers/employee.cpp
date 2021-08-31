#include<iostream>
#include<cstring>
using namespace std;

struct employee
{
    int emp_id;
    string emp_name;
    struct employee *next;
};

class program{
    employee *head = NULL, *temp = NULL, *sample = NULL, *head1 = NULL, *head2 = NULL, *temp1 = NULL, *temp2 = NULL;
    int id, counter, i;
    string name;
    public:
        employee *create();
        void insert();
        void remove();
        void list_display();
        void count();
        void reverse();
        void rev(employee *p);
        void concat();
};

employee *program::create(){
    employee *p = new(struct employee);

    cout << "Enter I.D. : ";
    cin >> id;
    cout << "Enter name : ";
    cin >> name;

    p->emp_id = id;
    p->emp_name = name;
    p->next = NULL;
    return p;
}

void program::insert(){
    employee *p = create();

    if(head == NULL){
        head = p;
    }
    else{
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = p;
    }
}

void program::remove(){
    int sid, flag = 0;
    cout << "Enter I.D. of employee whose data you want to delete : ";
    cin >> sid;
    temp = head;

    while(temp->next != NULL){
        if(temp->emp_id == sid){
            sample->next = temp->next;
            delete(temp);
            flag = 1;
        }
        sample = temp;
        temp = temp->next;
    }
    if(flag == 0){
        cout << "Sorry user not found!!! Check again!!!\n";
    }
}
void program::list_display(){
    if(head == NULL){
        cout << "List is empty\n";
    }
    else{
        temp = head;
        cout <<"------------------\n";
        cout << "I.D.No \t Name\n";
        cout <<"------------------\n";
        while(temp->next != NULL){
            cout << temp->emp_id << "\t" << temp->emp_name << "\n";
            temp = temp->next;
        }
        cout << temp->emp_id << "\t" << temp->emp_name << "\n";
    }
}

void program::count(){
    temp = head;
    counter = 0;
    while(temp->next != NULL){
        temp = temp->next;
        counter++;
    }
    counter++;
    cout << "Total number of employees : " << counter << endl;
}

void program::reverse(){
    cout <<"------------------\n";
    cout << "I.D.No \t Name\n";
    cout <<"------------------\n";
    rev(head);
}

void program::rev(employee *temp){
    if(temp == NULL){
        return;
    }
    else{
        rev(temp->next);
    }
    cout << temp->emp_id << "\t" << temp->emp_name << "\n";
}

void program::concat(){
    int k,j;
    cout<<"Enter no. of members in list1 : ";
    cin>>k;
    head=NULL;
    for(i=0;i<k;i++){
        insert();
        head1=head;
    }
    head=NULL;
    cout<<"Enter no. of members in list2 : ";
    cin>>j;
    for(i=0;i<j;i++){
        insert();
        head2=head;
    }

    head=NULL;
    temp1=head1;
    
    while(temp1->next!=NULL){
        temp1=temp1->next;   
    }
    
    temp1->next=head2;
    temp2=head1;        
    cout << "---------------------\n";        
    cout << "I.D.No.\t\tNAME\n";
    cout << "---------------------\n";        

    while(temp2->next!=NULL){ 
        cout<<"\n"<<temp2->emp_id<<"\t\t"<<temp2->emp_name;
        temp2=temp2->next;
    }
    cout<<"\n"<<temp2->emp_id<<"\t\t"<<temp2->emp_name;
    cout << "\n";
}  

int main(){
    program p;
    int choice;

    cout << "***********Menu Options***********" << endl;
    cout << "1. COUNT number of employees" << endl;
    cout << "2. DISPLAY the list" << endl;
    cout << "3. INSERT a node into the list" << endl;
    cout << "4. DELETE a node from the list" << endl;
    cout << "5. DISPALY list in reverse order" << endl;
    cout << "6. CONCATENATE two lists" << endl;
    cout << "7. EXIT" << endl;
    cout << "----------------------------------" << endl;

    cout << "Enter your choice : ";
    cin >> choice;   
    do{
        switch (choice)
        {
        case 1:
            p.count();
            break;
        case 2:
            p.list_display();
            break;
        case 3:
            p.insert();
            break;
        case 4:
            p.remove();
            break;
        case 5:
            p.reverse();
            break;
        case 6:
            p.concat();
            break;
        case 7:
            return 0;
            break;
        default:
            cout << "Enter a valid option !!!" << endl;
            break;
        }

        cout << "\nEnter your choice : ";
        cin >> choice;

    }while(choice != 7);
    
    
    return 0;
}