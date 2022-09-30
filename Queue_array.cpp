#include <iostream>

using namespace std;
template <class x>
class Queue_array
{
    private:
        x *queue,first,last,size;
    public:
        Queue_array(int n)
        {   
            first=last=-1;
            size=n;
            queue=new x(n);
        }
        ~Queue_array()
        {
            delete queue;
            first=last=-1;
        }
        void enqueuq(int value)
        {
            if((first+last)==size-1)
            {
                cout<<"Queue is full"<<endl;
            }
            else{
                queue[++last]=value;
                ++first;
            }
        }
        bool isEmpty()
        {
            if(last==-1)
            {
                return true;
            }
            else {return false;}
        }
        int dequeue()
        {
            if(isEmpty())
            {
                cout<<"Queue_array is empty"<<endl;
            }
            else{
                return queue[first++];
            }
        }
        void display()
        {
            if(isEmpty())
            {
                cout<<"Queue is empty"<<endl;
            }
            else{
                for(int i=first;i<=last;i++)
                {
                    cout<<queue[i];
                    if(i==last)
                    {
                        break;
                    }
                    cout<<',';
                }
            }
        }
        int peek()
        {
            return queue[first];
        }
        void clear()
        {
            first=last=-1;
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
                cout<<"Enter the size of the Queue: ";
                cin>>n;
                Queue_array <int>s(n);
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
                                s.enqueuq(value);
                            }
                            s.display();
                            break;
                        }
                        case 2:
                        {
                            cout<<"returned value is "<<s.dequeue()<<endl;
                            cout<<"New stack is: "<<endl;
                            s.display();
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
                            s.display();
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
                Queue_array <float>s(n);
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
                                s.enqueuq(value);
                            }
                            s.display();
                            break;
                        }
                        case 2:
                        {
                            cout<<"returned value is "<<s.dequeue()<<endl;
                            cout<<"New stack is: "<<endl;
                            s.display();
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
                            s.display();
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
                Queue_array <char>s(n);
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
                                s.enqueuq(value);
                            }
                            s.display();
                            break;
                        }
                        case 2:
                        {
                            cout<<"returned value is "<<s.dequeue()<<endl;
                            cout<<"New stack is: "<<endl;
                            s.display();
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
                            s.display();
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
