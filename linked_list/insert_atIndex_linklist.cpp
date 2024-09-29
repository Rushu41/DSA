#include<iostream>
using namespace std;
struct node{
   int data;
   struct node* next;
};
struct node* create(int data)
{
    node* n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->next = NULL;
}
void print(struct node* ptr)
{
    node* current = ptr;
    while( current != NULL)
    {
        cout << current->data<< " ";
        current = current->next ;
    }
     cout << "\n";
}
struct node* insertatIndex(struct node* head ,int data ,int idx)
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    node* p = head;
    int i = 0;
    while( i != idx-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;

}
int main()
{
    node* p = create(4);
    node* q = create(7);
    node* r = create(2);
    node* s = create(3);
    p->next = q;
    q->next = r;
    r->next = s;
    print(p);
    p = insertatIndex(p,43,2);
    print(p);
}
