#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* create(int data)
{
    struct node* n = (struct node*)malloc(sizeof(node));
    n->data = data;
    n->next =NULL;
    return n;
}
void print(struct node* ptr)
{
    while(ptr != NULL)
    {
        cout << ptr->data <<" ";
        ptr = ptr->next;
    }
    cout << "\n";
}
struct node* deleteAtEnd(struct node* head)
{
    struct node* p = head;
    struct node* q = head->next;
    while(q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
int main()
{
    
       node* p = create(4);
       node* q = create(9);
       node* r = create(2);
       node* s = create(8);
       node* t = create(2);

       p->next =q;
       q->next =r;
       r->next =s;
       s->next =t;

       print(p);
       p = deleteAtEnd(p);
       print(p);
}
