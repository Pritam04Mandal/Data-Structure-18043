#include <iostream>
using namespace std;
template <class x>
class Stack
{
    private:
        x *arr;
        int top=-1;
        int size;
    public:
        Stack(int n)
        {
            size=n;
            arr=new int(n);
            for(int i=0;i<n;i++)
            {
                arr[i]=0;
            }
        }
        void push(x value)
        {
            if(top=size-1)
            {
                cout<<"Stack is full"<<endl;
            }
            else{
                arr[++top]=value;
            }
        }
        x pop()
        {
            if(isEmpty())
            {
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            else{
                return arr[top--];
            }
        }
        bool isEmpty()
        {
            if(top==-1)
            {
                return true;
            }
            else{
                return false;
            }
        }
        void Display()
        {
            if(isEmpty())
            {
                cout<<"Stack is empty"<<endl;
            }
            else
            {
                for (int i=0;i<top;i++)
                {
                    cout<<arr[i]<<',';
                }
            }
        }
        x peek()
        {
            if(isEmpty())
            {
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            else{
                return arr[top];
            }
        }
        void clear()
        {
            top=-1;
        }
        ~Stack()
        {
           for (int i = 0; i < size; i++)
           {
                arr[i]=0;
           }
           top=-1;
           size=0;
           
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
                Stack <int>s(n);
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
                Stack <float>s(n);
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
                Stack <char>s(n);
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
    return ;
}
