/*       
*Write a program to implement singly linked list which supports the following operations: 
*(i) Insert an element x at the beginning of the singly linked list 
*(ii) Insert an element x at i th position in the singly linked list 
*(iii)Remove an element from the beginning of the singly linked list 
*(iv) Remove an element from i th position in the singly linked list. 
*(v) Search for an element x in the singly linked list and return its pointer 
*(vi) Concatenate two singly linked lists 
*/
#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
};
class SLL
{
    node *first=nullptr,*last=nullptr,*temp=nullptr,*temp1=nullptr;
    public:
        static int pos;
        /* void add_to_tail(int value)
        {
            if(first==nullptr)
            {
                temp=new node;
                temp->data=value;
                temp->next=nullptr;
                first=temp;
                last=temp;
            }
            else{
                temp=new node;
                temp->data=value;
                temp->next=nullptr;
                last->next=temp;
                last=temp;
            }
        } */
        void add_to_head(int value)
        {
            if(first==nullptr)
            {
                temp=new node;
                temp->data=value;
                temp->next=nullptr;
                first=temp;
                last=temp;
                pos++;
            }
            else{
                temp=new node;
                temp->data=value;
                temp->next=first;
                first=temp;
                pos++;
            }
        }
        void display()
        {
            if(first==nullptr)
            {
                cout<<"List is empty cannot not print"<<endl;
            }
            else{
                cout<<endl;
                temp=first;
                while(temp!=nullptr)
                {
                    cout<<temp->data<<"->";
                    node *f=temp->next;
                    temp=f;

                }
            }
        }
        void add_in_i_position(int position,int value)
        {
            if(first==nullptr)
            {
                cout<<"list is empty"<<endl;
                cout<<"new list created"<<endl;
                temp=new node;
                temp->data=value;
                temp->next=nullptr;
                first=temp;
                last=temp;
                pos++;
            }
            else{
                temp=first;
                int i=0;
                temp1=first;
                while(i!=position)
                {
                    temp1=temp;
                    temp=temp->next;
                    i++;
                }
                node *temporary=new node;
                temp1->next=temporary;
                temporary->next=temp;
                temporary->data=value; 
                pos++;   
            }
        }
        void delete_from_head()
        {
            
            if(first==nullptr)
            {
                cout<<"Cannot delete from an empty list"<<endl;
            }
            else if(first==last)
            {
                temp=first;
                first=nullptr;
                last=nullptr;
                delete temp;
                --pos;
            }
            else{
                temp=first;
                first=first->next;
                delete temp;
                --pos;
            }
        }
        /* void delete_from_tail()
        {
            if(first==nullptr)
            {
                cout<<"Cannot delete from an empty list"<<endl;
            }
            else if(first == last)
            {
                temp=first;
                first=nullptr;
                last=nullptr;
                delete temp;
            }
            else{
                temp=first;
                while(temp->next!=last)
                {
                    temp=temp->next;
                }
                if(temp==first)
                {
                    cout<<"Inner loop"<<endl;
                    delete temp;
                    delete first;
                    first=last;
                }
                else{
                    temp1=last;
                    last=temp;
                    last->next=nullptr;
                    delete temp1;
                    delete temp;
                }
            }
        } */
        void delete_from_i_position(int position)
        {
            if(first==nullptr)
            {
                cout<<"if loop"<<endl;
                cout<<"List is empty cannot delete anything"<<endl;
            }
            else if(first == last)
            {
                cout<<"Else if loop"<<endl;
                delete first;
                delete last;
                first=nullptr;
                last=nullptr;
                --pos;
            }
            else if(pos==2 && position==0)
            {
                delete first;
                first=last;
                --pos;
            }
            else{
                temp=first;
                temp1=first;
                node *temporary;
                int i=0;
                while(i!=position)
                {
                    temp1=temp;
                    temp=temp->next;
                    temporary=temp->next;
                    i++;
                }
                delete temp;
                temp1->next=temporary;
                --pos;

            }

        }
        void concatenate(SLL s2)
        {
            this->last->next=s2.first;
        } 
};
int SLL::pos=0;
int main()
{
    SLL s;
    char choice='Y';
    while((choice=='y') || (choice=='Y'))
    {
        cout<<"1. add to head"<<endl
            <<"2. add at ith position of the list"<<endl
            <<"3. delete from head"<<endl
            <<"4. delete from ith position"<<endl
            <<"5. search an element"<<endl
            <<"6. Concatenate two list"<<endl
            <<"7. Close the program"<<endl;
        int ch=0;
        cout<<"Enter your choice: ";
        cin>>ch;
        int value=0;
        int key=0;
        switch(ch){
            case 1:
            {
                cout<<"Enter the value";
                cin>>value;
                s.add_to_head(value);
                s.display();
                cout<<endl;
                break;

            }
             case 2:
            {
                cout<<"Enter the position at which you want to enter: ";
                int position;
                cin>>position;
                cout<<"Enter the value";
                cin>>value;
                s.add_in_i_position((position-1),value);
                s.display();
                cout<<endl;
                break;

            }
            case 3:
            {
                cout<<"Deleting from head"<<endl;;
                s.delete_from_head();
                s.display();
                break;
            }
            case 4:
            {
                int position;
                cout<<"Enter the position from which you want delete: ";
                cin>>position;
                s.delete_from_i_position((position-1));
                s.display();
                break;

            }
            case 6:
            {
                int n;
                cout<<"Enter the number of data you want to enter: ";
                cin>>n;
                SLL s2;
                for(int i=0;i<n;i++)
                {
                    cout<<"Enter the value you want to enter at head of new list: ";cin>>value;
                    s2.add_to_head(value);
                }
                s.concatenate(s2);
                s.display();
            }
            case 7:
            {
                cout<<"the program will now exit"<<endl;
                return 0;
            }
            default:{
                cout<<"Wrong choice"<<endl;
                break;}
        }
        cout<<"Do you want to continue(Y/N): ";
        cin>>choice;
    }
    
}