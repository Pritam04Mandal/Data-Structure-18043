#include <iostream>
using namespace std;
template <class x>
class stack_linkled_list
{
    class node
    {
        public:
            node *next;
            x data;
    };
    node *bottom,*top,*temp;
    int counter=0,size;
public:
    stack_linkled_list(int n)
    {
        size=n;
        top=temp=bottom=nullptr;
    }
    bool isEmpty()
    {
        if(bottom==nullptr)
        {
            return true;
        }
        else {return false;}
    }
    void push(x value)
    {
        if(counter==size)
        {
            cout<<"stack is full"<<endl;
        }
        else if(isEmpty())
        {
            temp=new node;
            temp->data=value;
            temp->next=nullptr;
            bottom=temp;
            top=temp;
            counter++;
        }
        else{
            temp=new node;
            temp->data=value;
            temp->next=nullptr;
            top->next=temp;
            top=temp;
            counter++;
        }
    }
    x pop()
    {
        if (isEmpty())
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
    void clear()
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
    void Display()
    {
        if(isEmpty())
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
    x peek()
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
    ~stack_linkled_list()
    {
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

};
int main()
{
    char choice='y';
    while(choice=='Y'||choice=='y')
    {
        cout<<"1. Integer\n2. Float\n3. Character"<<endl;
        int C;
        cout<<"Enter your choice: ";
        cin>>C;
        switch(C)
        {
            case 1:
            {
                int n;
                cout<<"Enter the size of the stack: ";
                cin>>n;
                stack_linkled_list <int>s(n);
                char Choice='y';
                while(Choice=='Y' || Choice=='y')
                {
                    cout<<"1. Push\n2. Pop\n3. Clear\n 4. Peek at top element\n5. Display";
                    int c;
                    cout<<"Enter the choice: ";
                    cin>>c;
                    switch (c)
                    {
                        case 1:
                        {
                            cout<<"Enter the number of data you want to enter: ";
                            int n;
                            cin>>n;
                            for(int i=0;i<n;i++)
                            {
                                int value;
                                cout<<"Enter the data: ";
                                cin>>value;
                                s.push(value);
                            }
                            s.Display();
                            break;
                        }
                        case 2:
                        {
                            cout<<"returned value is "<<s.pop()<<endl;
                            cout<<"New stack is: "<<endl;
                            s.Display();
                            break;
                        }
                        case 3:
                        {
                            cout<<"Clearing the stack...."<<endl;
                            break;
                        }
                        case 4:
                        {
                            cout<<"The top element is: "<<s.peek()<<endl;
                            break;
                        }
                        case 5:
                        {
                            cout<<"The stack is: "<<endl;
                            s.Display();
                            break;
                        }
                        default:
                        {
                            cout<<"Wrong choice....."<<endl;
                            break;
                        }
                    }
                    cout<<"do you want to continue: ";
                    cin>>Choice;
                }
                break;
            }
            case 2:
            {

                int n;
                cout<<"Enter the size of the stack: ";
                cin>>n;
                stack_linkled_list <float>s(n);
                char Choice='y';
                while(Choice=='Y' || Choice=='y')
                {
                    cout<<"1. Push\n2. Pop\n3. Clear\n 4. Peek at top element\n5. Display";
                    int c;
                    cout<<"Enter the choice: ";
                    cin>>c;
                    switch (c)
                    {
                        case 1:
                        {
                            cout<<"Enter the number of data you want to enter: ";
                            int n;
                            cin>>n;
                            for(int i=0;i<n;i++)
                            {
                                float value;
                                cout<<"Enter the data: ";
                                cin>>value;
                                s.push(value);
                            }
                            s.Display();
                            break;
                        }
                        case 2:
                        {
                            cout<<"returned value is "<<s.pop()<<endl;
                            cout<<"New stack is: "<<endl;
                            s.Display();
                            break;
                        }
                        case 3:
                        {
                            cout<<"Clearing the stack...."<<endl;
                            break;
                        }
                        case 4:
                        {
                            cout<<"The top element is: "<<s.peek()<<endl;
                            break;
                        }
                        case 5:
                        {
                            cout<<"The stack is: "<<endl;
                            s.Display();
                            break;
                        }
                        default:
                        {
                            cout<<"Wrong choice....."<<endl;
                            break;
                        }
                    }
                    cout<<"do you want to continue: ";
                    cin>>Choice;
                }
                break;
            }
            case 3:
            {
                int n;
                cout<<"Enter the size of the stack: ";
                cin>>n;
                stack_linkled_list <char>s(n);
                char Choice='y';
                while(Choice=='Y' || Choice=='y')
                {
                    cout<<"1. Push\n2. Pop\n3. Clear\n4. Peek at top element\n5. Display"<<endl;
                    int c;
                    cout<<"Enter the choice: ";
                    cin>>c;
                    switch (c)
                    {
                        case 1:
                        {
                            cout<<"Enter the number of data you want to enter: ";
                            int n;
                            cin>>n;
                            for(int i=0;i<n;i++)
                            {
                                char value;
                                cout<<"Enter the data: ";
                                cin>>value;
                                s.push(value);
                            }
                            s.Display();
                            break;
                        }
                        case 2:
                        {
                            cout<<"returned value is "<<s.pop()<<endl;
                            cout<<"New stack is: "<<endl;
                            s.Display();
                            break;
                        }
                        case 3:
                        {
                            cout<<"Clearing the stack...."<<endl;
                            break;
                        }
                        case 4:
                        {
                            cout<<"The top element is: "<<s.peek()<<endl;
                            break;
                        }
                        case 5:
                        {
                            cout<<"The stack is: "<<endl;
                            s.Display();
                            break;
                        }
                        default:
                        {
                            cout<<"Wrong choice....."<<endl;
                            break;
                        }
                    }
                    cout<<"do you want to continue: ";
                    cin>>Choice;
                }
                break;
        
            }
        }
        cout<<"Do you want to continue: ";
        cin>>choice;
    }
    return 0;
}
