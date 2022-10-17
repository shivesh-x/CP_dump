#include <iostream>
using namespace std;

// Uses of Inorder Traversal:
// In the case of binary search trees (BST), Inorder traversal gives nodes in non-decreasing order. 
// To get nodes of BST in non-increasing order, a variation of Inorder traversal where Inorder traversal is reversed can be used. 

struct node
{
    int data;
    node *lc;
    node *rc;
};

struct que 
{
    int status;
    node *ptr;
    que *next;
};
struct que *first=NULL;
struct que *last=NULL;

node *insert(int x,node *root)
{
    node *temp=new node;
    que *q=new que;
    temp->data=x;
    temp->lc=NULL;
    temp->rc=NULL;
    q->status=0;
    q->next=NULL;
    
    if(root==NULL)
    {
        q->ptr=temp;
        first=last=q;
        return temp;
    }
    else
    {
        if(first->status==0)
        {
            first->ptr->lc=temp;
            first->status=1;
        }
        else
        {
            first->ptr->rc=temp;
            first=first->next;
        }
        last->next = q;
        q->ptr = temp;
        last = q;
    }
    return root;
}
void inorder(node *root)
{
    if(root == NULL)
    return;
    else
    {
        cout<<root->data<<" ";
        inorder(root->lc);
        inorder(root->rc);
    }
}

int main()
{
    node *root = NULL;
    cout<<"Tree Elements in Array Form : ";
    for(int i = 0; i < 10; i++)
    {
        cout<<i<<" ";
        root = insert(i,root);
    }
    cout<<"\nInorder Traversal : ";
    inorder(root);
    return 0;
}
