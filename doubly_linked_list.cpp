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
	node *first,*temp1;
	node *last;
	node*temp;
	public:
        DLL()
        {
            first=nullptr;
            last=temp=temp1=nullptr;
        }
		
		static int pos;
		void add_to_head(x num)
        {
        	x value;
        	for(int i=0;i<num;i++)
        	{
        		
        		
        		if(first==nullptr)
            	{

            		std::cout<<"Enter the value: ";
        			std::cin>>value;
                	temp=new node;
                	temp->data=value;
                	temp->next=nullptr;
                	temp->prev=nullptr;
                	first=temp;
                	last=temp;
                	pos++;
            	}
            	else{
            		std::cout<<"Enter the value: ";
        			std::cin>>value;
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
                std::cout<<"list is empty"<<endl;
                std::cout<<"new list created"<<endl;
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
        		std::cout<<endl<<"List is empty"<<endl;
        	}
        	else
        	{
        		std::cout<<endl;
	        	temp=first;
	        	do
	        	{
	        		std::cout<<temp->data<<"->";

	        		temp=temp->next;

	        	}while(temp!=nullptr);
	        	std::cout<<endl;
        	}
        }
        void add_to_tail(int num)
        {
        	x value;
        	for(int i=0;i<num;i++)
        	{
        		
        		if(first==nullptr)
            	{

            		std::cout<<"Enter the value: ";
        			std::cin>>value;
                	temp=new node;
                	temp->data=value;
                	temp->next=nullptr;
                	temp->prev=nullptr;
                	first=temp;
                	last=temp;
                	pos++;
            	}
            	else{
            		std::cout<<"Enter the value: ";
            		std::cin>>value;
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
        		std::cout<<endl<<"List is empty"<<endl;
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
        		std::cout<<endl<<"List is empty"<<endl;
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
        		std::cout<<endl<<"List is empty"<<endl;
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
        		std::cout<<"List is empty"<<endl;
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
        void operator +(DLL <x>s2)
        {
            if(this->first==nullptr)
            {
                this->first=s2.first;
                this->last=s2.last;
            }
            else{
                this->last->next=s2.first;
                s2.first->prev=this->last;
            }
        }
        ~DLL()
        {
        	temp=first;
            temp1=first;
            while (temp!=nullptr)
            {
                delete temp1;
                temp1=temp->next;
                temp=temp->next;
            }
            delete temp;
            
        }


};
template <class x>
int DLL <x>::pos=0;
int main()
{
    char CHOICE='y';
    while((CHOICE=='y')||(CHOICE=='Y'))
    {
        int chc;
        std::cout<<endl<<"1. For integer values"<<endl<<"2. For Decimal values"<<endl<<"3. For Character values"<<endl;
        std::cout<<"Enter you choice: ";
        std::cin>>chc;
        if(chc==1)
        {
            DLL <int>s;
            char choice='y';
            while((choice=='y')||(choice=='Y'))
            {
                std::cout<<"1. add to head"<<endl
                    <<"2. add at ith position of the list"<<endl
                    <<"3. add to tail"<<endl
                    <<"4. delete from head"<<endl
                    <<"5. delete from ith position"<<endl
                    <<"6. delete from tail"<<endl
                    <<"7. search an element"<<endl
                    <<"8. concatenate to list"<<endl
                    <<"9. display the list"<<endl;
                int ch=0;
                std::cout<<"Enter your choice: ";
                std::cout<<"hwllo wolrd"<<endl;
                std::cin>>ch;
                int value=0;
                int key=0;
                if(ch==1)
                {
                    std::cout<<"Enter how many data you want to enter: ";
                    std::cin>>value;
                    s.add_to_head(value);
                    s.display();
                    std::cout<<endl;
                    

                }
                else if(ch==2)
                {
                    std::cout<<"Enter the position at which you want to enter: ";
                    int position;
                    std::cin>>position;
                    std::cout<<"Enter the value";
                    std::cin>>value;
                    s.add_in_i_position((position-1),value);
                    s.display();
                    std::cout<<endl;
                    

                }
                else if(ch==3)
                {
                    std::cout<<"Enter how many data you want to enter: ";
                    std::cin>>value;
                    s.add_to_tail(value);
                    s.display();
                    std::cout<<endl;
                    
                }
                else if(ch==4)
                {
                    std::cout<<"Deleting from head"<<endl;
                    s.remove_from_head();
                    s.display();
                    
                }
                else if(ch==5)
                {
                    int position;
                    std::cout<<"Enter the position from which you want delete: ";
                    std::cin>>position;
                    s.remove_from_i_position((position-1));
                    s.display();

                }
                else if(ch==6)
                {
                    std::cout<<"Deleting from head"<<endl;;
                    s.remove_from_tail();
                    s.display();
                }
                else if(ch==7)
                {   int search;
                    std::cout<<"Enter the value you want to search: ";
                    std::cin>>search;
                    int position=s.search(search);
                    if(position!=-1)
                    {
                        std::cout<<"at "<<position<<endl;
                    }

                }
                else if(ch==8)
                {
                    DLL <int>s2;
                    std::cout<<"How many data you want to enter in the second list: ";
                    int num1;
                    std::cin>>num1;
                    s2.add_to_head(num1);
                    std::cout<<"Second list"<<endl;
                    s2.display();
                    std::cout<<"After concatenation"<<endl;
                    s+s2;
                    s.display();

                }
                else if(ch==9)
                {
                    s.display();
                }
                else
                {
                    std::cout<<"Wrong choice"<<endl;
                }
                std::cout<<"do you want to continue(Y/N): ";
                std::cin>>choice;
            }
        }
        else if(chc==2)
        {
            DLL <float>s;
            char choice='Y';
            while((choice=='y') || (choice=='Y'))
            {
                std::cout<<"1. add to head"<<endl
                    <<"2. add at ith position of the list"<<endl
                    <<"3. add to tail"<<endl
                    <<"4. delete from head"<<endl
                    <<"5. delete from ith position"<<endl
                    <<"6. delete from tail"<<endl
                    <<"7. search an element"<<endl
                    <<"8. concatenate to list"<<endl
                    <<"9. display the list"<<endl;
                int ch=0;
                std::cout<<"Enter your choice: ";
                std::cin>>ch;
                float value=0;
                int key=0;
                switch(ch){
                    case 1:
                    {
                        std::cout<<"Enter how many data you want to enter: ";
                        std::cin>>value;
                        s.add_to_head(value);
                        s.display();
                        std::cout<<endl;
                        break;

                    }
                    case 2:
                    {
                        std::cout<<"Enter the position at which you want to enter: ";
                        int position;
                        std::cin>>position;
                        std::cout<<"Enter the value";
                        std::cin>>value;
                        s.add_in_i_position((position-1),value);
                        s.display();
                        std::cout<<endl;
                        break;

                    }
                    case 3:
                    {
                        std::cout<<"Enter how many data you want to enter: ";
                        std::cin>>value;
                        s.add_to_tail(value);
                        s.display();
                        std::cout<<endl;
                        break;
                    }
                    case 4:
                    {
                        std::cout<<"Deleting from head"<<endl;;
                        s.remove_from_head();
                        s.display();
                        break;
                    }
                    case 5:
                    {
                        int position;
                        std::cout<<"Enter the position from which you want delete: ";
                        std::cin>>position;
                        s.remove_from_i_position((position-1));
                        s.display();
                        break;

                    }
                    case 6:
                    {
                        std::cout<<"Deleting from head"<<endl;;
                        s.remove_from_tail();
                        s.display();
                        break;
                    }
                    case 7:
                    {   float search;
                        std::cout<<"Enter the value you want to search: ";
                        std::cin>>search;
                        int position=s.search(search);
                        if(position!=-1)
                        {
                            std::cout<<"at "<<position<<endl;
                        }
                        break;

                    }
                    // case 6:
                    // {
                    //     int n;
                    //     std::cout<<"Enter the number of data you want to enter: ";
                    //     std::cin>>n;
                    //     SLL <int>s2;
                    //     for(int i=0;i<n;i++)
                    //     {
                    //         std::cout<<"Enter the value you want to enter at head of new list: ";std::cin>>value;
                    //         s2.add_to_head(value);
                    //     }
                    //     s+s2;
                    //     s.display();
                    //     break;
                    // }
                    case 9:
                    {
                        s.display();
                        break;
                    }
                    case 8:
                    {
                        DLL <float>s2;
                        std::cout<<"How many data you want to enter in the second list: ";
                        int num1;
                        std::cin>>num1;
                        s2.add_to_head(num1);
                        std::cout<<"Second list"<<endl;
                        s2.display();
                        std::cout<<"After concatenation"<<endl;
                        s+s2;
                        s.display();
                        break;
                    }
                    default:{
                        std::cout<<"Wrong choice"<<endl;
                        break;
                    }
                }
                std::cout<<"Do you want to continue(Y/N): ";
                std::cin>>choice;
            }
        }
        else if(chc==3)
        {
            DLL <char>s;
            char choice='Y';
            while((choice=='y') || (choice=='Y'))
            {
                std::cout<<"1. add to head"<<endl
                    <<"2. add at ith position of the list"<<endl
                    <<"3. add to tail"<<endl
                    <<"4. delete from head"<<endl
                    <<"5. delete from ith position"<<endl
                    <<"6. delete from tail"<<endl
                    <<"7. search an element"<<endl
                    <<"8. concatenate to list"<<endl
                    <<"9. display the list"<<endl;
                int ch=0;
                std::cout<<"Enter your choice: ";
                std::cin>>ch;
                int num=0;
                char value=0;
                int key=0;
                switch(ch){
                    case 1:
                    {
                        std::cout<<"Enter how many data you want to enter: ";
                        std::cin>>num;
                        s.add_to_head(num);
                        s.display();
                        std::cout<<endl;
                        break;

                    }
                    case 2:
                    {
                        std::cout<<"Enter the position at which you want to enter: ";
                        int position;
                        std::cin>>position;
                        std::cout<<"Enter the value";
                        std::cin>>value;
                        s.add_in_i_position((position-1),value);
                        s.display();
                        std::cout<<endl;
                        break;

                    }
                    case 3:
                    {
                        std::cout<<"Enter how many data you want to enter: ";
                        std::cin>>value;
                        s.add_to_tail(value);
                        s.display();
                        std::cout<<endl;
                        break;
                    }
                    case 4:
                    {
                        std::cout<<"Deleting from head"<<endl;;
                        s.remove_from_head();
                        s.display();
                        break;
                    }
                    case 5:
                    {
                        int position;
                        std::cout<<"Enter the position from which you want delete: ";
                        std::cin>>position;
                        s.remove_from_i_position((position-1));
                        s.display();
                        break;

                    }
                    case 6:
                    {
                        std::cout<<"Deleting from head"<<endl;;
                        
                        s.display();
                        break;
                    }
                    case 7:
                    {   char search;
                        std::cout<<"Enter the value you want to search: ";
                        std::cin>>search;
                        int position=s.search(search);
                        if(position!=-1)
                        {
                            std::cout<<"at "<<position<<endl;
                        }
                        break;

                    }
                    // case 6:
                    // {
                    //     int n;
                    //     std::cout<<"Enter the number of data you want to enter: ";
                    //     std::cin>>n;
                    //     SLL <int>s2;
                    //     for(int i=0;i<n;i++)
                    //     {
                    //         std::cout<<"Enter the value you want to enter at head of new list: ";std::cin>>value;
                    //         s2.add_to_head(value);
                    //     }
                    //     s+s2;
                    //     s.display();
                    //     break;
                    // }
                    case 8:
                    {
                        DLL <char>s2;
                        std::cout<<"How many data you want to enter in the second list: ";
                        int num1;
                        std::cin>>num1;
                        s2.add_to_head(num1);
                        std::cout<<"Second list"<<endl;
                        s2.display();
                        std::cout<<"After concatenation"<<endl;
                        s+s2;
                        s.display();
                        break;
                    }
                    case 9:
                    {
                        s.display();
                        break;
                    }
                    // case 8:
                    // {
                    //     s.reverse();
                    //     std::cout<<endl;
                    //     break;
                    // }
                    default:{
                        std::cout<<"Wrong choice"<<endl;
                        break;
                    }
                }
                std::cout<<"Do you want to continue(Y/N): ";
                std::cin>>choice;
            }
        }
        else
        {
            std::cout<<"Wrong Choice"<<endl;
        }
        std::cout<<"do you want to continue(Y/N): ";
        std::cin>>CHOICE;
    }
    return 0;
    
    
}
