#include <iostream>
using namespace std;

class BST{

    private:
        class node{
            public:
                node *right;
                node *left;
                int data;

        };
        node *root,*p,*q;
    public:
        void insert()
        {
            int i;
            cout<<"Enter the node value(Enter 0 to exit): ";
            cin>>i;
            while (i!=0)
            {
                if(root==nullptr){
                    root=new node();
                    root->left=nullptr;
                    root->right=nullptr;
                    root->data=i;
                }
                else{
                    p=root;
                    q=new node();
                    q->left=q->right=nullptr;
                    q->data=i;
                    while(p!=nullptr)
                    {
                        if(p->data>i)
                        {
                            p=p->right;
                        }
                        else{
                            p=p->left;
                        }
                    }
                    if(i>p->data)
                    {
                        p->right=q;
                    }
                    else{
                        p->left=q;
                    }
                }
                cout<<"Enter the node value(Enter 0 to exit): ";
                cin>>i;
            }
            
        }
        void preorder_rec(node *temp)
        {
            if(temp!=nullptr)
            {
                cout<<temp->data<<" ";
                preorder_rec(temp->left);
                preorder_rec(temp->right);
            }

        }
        void inorder_rec(node *temp)
        {
            if(temp!=nullptr)
            {
                inorder_rec(temp->left);
                cout<<temp->data<<" ";
                inorder_rec(temp->right);
            }
        }
        void postorder_rec(node *temp)
        {
            if(temp!=nullptr)
            {
                inorder_rec(temp->left);
                inorder_rec(temp->right);
                cout<<temp->data<<" ";
            }
        }
        void preorder_itr();
        void inorder_itr();
        void postorder_itr();
        void deletion_copying();
        void deletion_merging();
        

};

int main()
{

return 0;
}
