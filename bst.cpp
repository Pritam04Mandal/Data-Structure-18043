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
        node *p=nullptr,*q=nullptr;
    public:
    node *root=nullptr;
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
                    node *p1;
                    while(p!=nullptr)
                    {
                        if(p->data>i)
                        {
                            p1=p;
                            p=p->left;
                        }
                        else{
                            p1=p;
                            p=p->right;
                        }
                    }
                    if(i>p1->data)
                    {
                        p1->right=q;
                    }
                    else{
                        p1->left=q;
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
                postorder_rec(temp->left);
                postorder_rec(temp->right);
                cout<<temp->data<<" ";
            }
        }
        int leftmost(node *temp,int counter)
        {
            if(temp!=nullptr)
            {
                int i=leftmost(temp->left,counter+1);
            }
            else{
                return counter;
            }
        }
        int rightmost(node *temp,int counter)
        {
            if(temp!=nullptr)
            {
                int i=rightmost(temp->left,counter+1);
            }
            else{
                return counter;
            }
        }
        int height(node *temp)
        {
            int hgtr=0,hgtl=0;
            while(temp->left!=nullptr||temp->right!=nullptr)
            {
                if(temp->left!=nullptr)
                {
                    temp=temp->left;
                    hgtr=hgtr+1;
                }
                if(temp->right!=nullptr)
                {
                    temp=temp->right;
                    hgtr=hgtr+1;
                }
            }
            temp=root;
            while(temp->left!=nullptr||temp->right!=nullptr)
            {
                if(temp->right!=nullptr)
                {
                    temp=temp->right;
                    hgtl=hgtl+1;
                }
                if(temp->left!=nullptr)
                {
                    temp=temp->left;
                    hgtl=hgtl+1;
                }
            }
            int lft=leftmost(root,-1);
            int rgt=rightmost(root,-1);
            cout<<hgtl<<" "<<hgtr<<" "<<lft<<" "<<rgt<<endl;
            if(lft>=rgt && lft>=hgtl && lft>=hgtr)
            {
                return lft;
            }
            else if(rgt>=lft && rgt>=hgtl && rgt>=hgtr)
            {
                return rgt;
            }
            else if(hgtr>=rgt && hgtr>=hgtl && hgtr>=lft)
            {
                return hgtr;
            }
            else{
                return hgtl;
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
    BST b;

    b.insert();
    cout<<b.height(b.root)<<endl;
    b.preorder_rec(b.root);
    cout<<endl;
    b.inorder_rec(b.root);
    cout<<endl;
    b.postorder_rec(b.root);
    cout<<endl;

return 0;
}
