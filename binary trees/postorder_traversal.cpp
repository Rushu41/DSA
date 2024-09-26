#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* create(int data)
{
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n-> data = data;
    n->left = NULL;
    n->right = NULL;
}
void preorder(struct node* root)
{
    if(root != NULL)
    {
        preorder(root->left);
        preorder(root->right);
        cout << root->data <<" ";
    }
}
int main()
{
    struct node* p = create(2);
    struct node* p1 = create(4);
    struct node* p2 = create(6);
    struct node* p3 = create(5);
    struct node* p4 = create(8);

    //      2
    //     / \
    //    4   6
    //   / \
    //  5   8
    p->left = p1;
    p->right =p2;
    p1->left = p3;
    p1->right =p4;
    preorder(p);
}

