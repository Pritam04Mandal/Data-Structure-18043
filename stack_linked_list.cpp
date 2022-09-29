#include <iostream>
using namespace std;
class stack_linkled_list
{
    class node
    {
        public:
            node *next;
            int data;
    };
    node *bottom=nullptr,*top=nullptr,*temp=nullptr;
public:
    void push(int value)
    {
        if(bottom==nullptr)
        {
            temp=new node;
            temp->data=value;
            temp->next=nullptr;
            bottom=temp;
            top=temp;
        }
        else{
            temp=new node;
            temp->data=value;
            temp->next=nullptr;
            top->next=temp;
            top=temp;
        }
    }
    int pop()
    {
        if (bottom==nullptr)
        {
            cout<<"Stack is empty..."<<endl;
            return -1;
        }
        else{
            int dat=top->data;
            temp=bottom;
            while(temp->next!=top)
            {
                temp=temp->next;
            }
            delete top;
            top=temp;
            top->next=nullptr;
            return dat;
        }
    }
    int clear()
    {
        if(bottom=nullptr)
        {
            cout<<"Stack is empty...."<<endl;
        }
        else{
            temp=bottom;
            node *temporary;
            while(temp!=top)
            {
                temporary=temp;
                delete temporary;
                temp=temp->next;
                
            }
            delete temp;
        }
        
    }
    void display()
    {
        if(bottom==nullptr)
        {
            cout<<"Stack is empty..."<<endl;
        }
        else{
            temp=bottom;
            while(temp!=top)
            {
                cout<<temp->data;
                if(temp==top)
                {
                    break;
                }
                cout<<",";
            }
        }
    }
    int peek()
    {
        if(bottom=nullptr)
        {
            cout<<"Stack is empty..."<<endl;
            return -1;
        }
        else
        {
            return top->data;
        }
    }

};
int main()
{

    return 0;
}
