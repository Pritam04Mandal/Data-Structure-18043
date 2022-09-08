# include <iostream>
# include <string>

using namespace std;

template <class x>
class DLL{
	class node{
		public:
			x data;
			node *next;
			node *prev;
	};
	node *first=nullptr,*temp1=nullptr;
	node *last=nullptr;
	node*temp=nullptr;
	public:
		
		static int pos;
		void add_to_head(x num)
        {
        	x value;
        	for(int i=0;i<num;i++)
        	{
        		
        		
        		if(first==nullptr)
            	{

            		cout<<"Enter the value: ";
        			cin>>value;
                	temp=new node;
                	temp->data=value;
                	temp->next=nullptr;
                	temp->prev=nullptr;
                	first=temp;
                	last=temp;
                	pos++;
            	}
            	else{
            		cout<<"Enter the value: ";
        			cin>>value;
                	temp=new node;
                	temp->data=value;
                	temp->next=first;
                	temp->prev=nullptr;
                	first->prev=temp;
                	first=temp;
                	pos++;
            	}
        	}
        }
        void add_in_i_position(int position,x value)
        {
            if(first==nullptr)
            {
                cout<<"list is empty"<<endl;
                cout<<"new list created"<<endl;
                temp=new node;
                temp->data=value;
                temp->prev=nullptr;
                temp->next=nullptr;
                first=temp;
                last=temp;
                pos++;
            }
            else if(position==0)
            {
                temp=new node;
                temp->data=value;
                first->prev=temp;
                temp->prev=nullptr;
                temp->next=first;
                first=temp;
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
                temporary->prev=temp1;
                temporary->next=temp;
                temp->prev=temporary;
                temporary->data=value; 
                pos++;   
            }
        }
        void display()
        {
        	if(first==nullptr)
        	{
        		cout<<endl<<"List is empty"<<endl;
        	}
        	else
        	{
        		cout<<endl;
	        	temp=first;
	        	do
	        	{
	        		cout<<temp->data<<"->";

	        		temp=temp->next;

	        	}while(temp!=nullptr);
	        	cout<<endl;
        	}
        }
        void add_to_tail(int num)
        {
        	x value;
        	for(int i=0;i<num;i++)
        	{
        		
        		if(first==nullptr)
            	{

            		cout<<"Enter the value: ";
        			cin>>value;
                	temp=new node;
                	temp->data=value;
                	temp->next=nullptr;
                	temp->prev=nullptr;
                	first=temp;
                	last=temp;
                	pos++;
            	}
            	else{
            		cout<<"Enter the value: ";
            		cin>>value;
            		temp=new node;
            		temp->data=value;
            		last->next=temp;
            		temp->prev=last;
            		temp->next=nullptr;
            		last=temp;
            		pos++;
            	}
        	}
        }
        void remove_from_head()
        {
        	if(first==nullptr)
        	{
        		cout<<endl<<"List is empty"<<endl;
        	}
        	else
        	{
        		temp=last;
        		while(temp->prev!=first)
        		{
        			temp=temp->prev;
        		}
        		delete first;
        		first=temp;
        		first->prev=nullptr;
        		--pos;
        	}
        }
        void remove_from_tail()
        {
        	if(first==nullptr)
        	{
        		cout<<endl<<"List is empty"<<endl;
        	}
        	else
        	{
        		temp=first;
        		while(temp->next!=last)
        		{
        			temp=temp->next;
        		}
        		delete last;
        		last=temp;
        		last->next=nullptr;
        		--pos;
        	}
        }
        void remove_from_i_position(int position)
        {
        	if(first==nullptr)
        	{
        		cout<<endl<<"List is empty"<<endl;
        	}
        	else
        	{
        		int i=0;
        		temp=first;
        		temp1=first;
        		while(i<position)
        		{
        			temp1=temp;
        			temp=temp->next;
        			i++;
        		}
        		node *temporary=temp->next;
        		delete temp;
        		temp1->next=temporary;
        		temporary->prev=temp1;
        		--pos;
        	}
        }
        int search(x value)
        {
        	if(first==nullptr)
        	{
        		cout<<"List is empty"<<endl;
        	}
        	else
        	{
        		temp=first;
        		for(int i=0;i<pos;i++)
        		{
        			if(temp->data==value)
        			{
        				return (i+1);
        			}
        			else
        			{
        				temp=temp->next;
        			}
        		}
        	}
        	return -1;
        }
        ~DLL()
        {
        	temp=first;
        	while(temp!=nullptr)
        	{
        		temp1=temp;
        		delete temp1;
        		temp=temp->next;
        	}
        	delete temp;
        	delete first;
        	delete last;
        }


};
template <class x>
int DLL <x>::pos=0;
int main()
{
    int chc;
    cout<<endl<<"1. For integer values"<<endl<<"2. For Decimal values"<<endl<<"3. For Character values"<<endl;
    cout<<"Enter you choice: ";
    cin>>chc;
    if(chc==1)
    {
        DLL <int>s;
        char choice='y';
        while((choice=='y')||(choice=='Y'))
        {
            cout<<"1. add to head"<<endl
                <<"2. add at ith position of the list"<<endl
                <<"3. add to tail"<<endl
                <<"4. delete from head"<<endl
                <<"5. delete from ith position"<<endl
                <<"6. delete from tail"<<endl
                <<"7. search an element"<<endl
                <<"8. concatenate to list"<<endl
                <<"9. display the list"<<endl;
            int ch=0;
            cout<<"Enter your choice: ";
            cout<<"hwllo wolrd"<<endl;
            cin>>ch;
            int value=0;
            int key=0;
            if(ch==1)
            {
                cout<<"Enter how many data you want to enter: ";
                cin>>value;
                s.add_to_head(value);
                s.display();
                cout<<endl;
                

            }
            else if(ch==2)
            {
                cout<<"Enter the position at which you want to enter: ";
                int position;
                cin>>position;
                cout<<"Enter the value";
                cin>>value;
                s.add_in_i_position((position-1),value);
                s.display();
                cout<<endl;
                

            }
            else if(ch==3)
            {
                cout<<"Enter how many data you want to enter: ";
                cin>>value;
                s.add_to_tail(value);
                s.display();
                cout<<endl;
                
            }
            else if(ch==4)
            {
                cout<<"Deleting from head"<<endl;
                s.remove_from_head();
                s.display();
                
            }
            else if(ch==5)
            {
                int position;
            cout<<"Enter the position from which you want delete: ";
                cin>>position;
                s.remove_from_i_position((position-1));
                s.display();

            }
            else if(ch==6)
            {
                cout<<"Deleting from head"<<endl;;
                s.remove_from_tail();
                s.display();
            }
            else if(ch==7)
            {   int search;
                cout<<"Enter the value you want to search: ";
                cin>>search;
                int position=s.search(search);
                if(position!=-1)
                {
                    cout<<"at "<<position<<endl;
                }

            }
                // case 6:
                // {
                //     int n;
                //     cout<<"Enter the number of data you want to enter: ";
                //     cin>>n;
                //     SLL <int>s2;
                //     for(int i=0;i<n;i++)
                //     {
                //         cout<<"Enter the value you want to enter at head of new list: ";cin>>value;
                //         s2.add_to_head(value);
                //     }
                //     s+s2;
                //     s.display();
                //     break;
                // }
            else if(ch==8)
            {
                s.display();
            }
                // case 8:
                // {
                //     s.reverse();
                //     cout<<endl;
                //     break;
                // }
            else if(ch==9)
            {
                cout<<"Now breaking the loop"<<endl;
                choice=false;
            }
            else
            {
                cout<<"Wrong choice"<<endl;
            }
            cout<<"do you want to continue(Y/N): ";
            cin>>choice;
        }
    }
    else if(chc==2)
    {
        DLL <float>s;
        char choice='Y';
        while((choice=='y') || (choice=='Y'))
        {
            cout<<"1. add to head"<<endl
                <<"2. add at ith position of the list"<<endl
                <<"3. add to tail"<<endl
                <<"4. delete from head"<<endl
                <<"5. delete from ith position"<<endl
                <<"6. delete from tail"<<endl
                <<"7. search an element"<<endl
                <<"8. concatenate to list"<<endl
                <<"9. display the list"<<endl;
            int ch=0;
            cout<<"Enter your choice: ";
            cin>>ch;
            float value=0;
            int key=0;
            switch(ch){
                case 1:
                {
                    cout<<"Enter how many data you want to enter: ";
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
                	cout<<"Enter how many data you want to enter: ";
                    cin>>value;
                    s.add_to_tail(value);
                    s.display();
                    cout<<endl;
                    break;
                }
                case 4:
                {
                    cout<<"Deleting from head"<<endl;;
                    s.remove_from_head();
                    s.display();
                    break;
                }
                case 5:
                {
                    int position;
                    cout<<"Enter the position from which you want delete: ";
                    cin>>position;
                    s.remove_from_i_position((position-1));
                    s.display();
                    break;

                }
                case 6:
                {
                	cout<<"Deleting from head"<<endl;;
                    s.remove_from_tail();
                    s.display();
                    break;
                }
                case 7:
                {   float search;
                    cout<<"Enter the value you want to search: ";
                    cin>>search;
                    int position=s.search(search);
                    if(position!=-1)
                    {
                        cout<<"at "<<position<<endl;
                    }
                    break;

                }
                // case 6:
                // {
                //     int n;
                //     cout<<"Enter the number of data you want to enter: ";
                //     cin>>n;
                //     SLL <int>s2;
                //     for(int i=0;i<n;i++)
                //     {
                //         cout<<"Enter the value you want to enter at head of new list: ";cin>>value;
                //         s2.add_to_head(value);
                //     }
                //     s+s2;
                //     s.display();
                //     break;
                // }
                case 8:
                {
                    s.display();
                    break;
                }
                // case 8:
                // {
                //     s.reverse();
                //     cout<<endl;
                //     break;
                // }
                case 9:
                {
                    cout<<"the program will now exit"<<endl;
                    return 0;
                }
                default:{
                    cout<<"Wrong choice"<<endl;
                    break;
                }
            }
            cout<<"Do you want to continue(Y/N): ";
            cin>>choice;
        }
    }
    else if(chc==3)
    {
        DLL <char>s;
        char choice='Y';
        while((choice=='y') || (choice=='Y'))
        {
            cout<<"1. add to head"<<endl
                <<"2. add at ith position of the list"<<endl
                <<"3. add to tail"<<endl
                <<"4. delete from head"<<endl
                <<"5. delete from ith position"<<endl
                <<"6. delete from tail"<<endl
                <<"7. search an element"<<endl
                <<"8. concatenate to list"<<endl
                <<"9. display the list"<<endl;
            int ch=0;
            cout<<"Enter your choice: ";
            cin>>ch;
            int num=0;
            char value=0;
            int key=0;
            switch(ch){
                case 1:
                {
                    cout<<"Enter how many data you want to enter: ";
                    cin>>num;
                    s.add_to_head(num);
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
                	cout<<"Enter how many data you want to enter: ";
                    cin>>value;
                    s.add_to_tail(value);
                    s.display();
                    cout<<endl;
                    break;
                }
                case 4:
                {
                    cout<<"Deleting from head"<<endl;;
                    s.remove_from_head();
                    s.display();
                    break;
                }
                case 5:
                {
                    int position;
                    cout<<"Enter the position from which you want delete: ";
                    cin>>position;
                    s.remove_from_i_position((position-1));
                    s.display();
                    break;

                }
                case 6:
                {
                	cout<<"Deleting from head"<<endl;;
                    
                    s.display();
                    break;
                }
                case 7:
                {   char search;
                    cout<<"Enter the value you want to search: ";
                    cin>>search;
                    int position=s.search(search);
                    if(position!=-1)
                    {
                        cout<<"at "<<position<<endl;
                    }
                    break;

                }
                // case 6:
                // {
                //     int n;
                //     cout<<"Enter the number of data you want to enter: ";
                //     cin>>n;
                //     SLL <int>s2;
                //     for(int i=0;i<n;i++)
                //     {
                //         cout<<"Enter the value you want to enter at head of new list: ";cin>>value;
                //         s2.add_to_head(value);
                //     }
                //     s+s2;
                //     s.display();
                //     break;
                // }
                case 8:
                {
                    s.display();
                    break;
                }
                // case 8:
                // {
                //     s.reverse();
                //     cout<<endl;
                //     break;
                // }
                case 9:
                {
                    cout<<"the program will now exit"<<endl;
                    return 0;
                }
                default:{
                    cout<<"Wrong choice"<<endl;
                    break;
                }
            }
            cout<<"Do you want to continue(Y/N): ";
            cin>>choice;
        }
    }
    else
    {
        cout<<"Wrong Choice"<<endl;
    }
    return 0;
    
    
}
