#include<iostream>
using namespace std;
struct node{
      int data;
      struct node* next;
};
struct node* create( int data)
{
    struct node* n = (struct node*)malloc(sizeof(node));
    n->data = data;
    n->next = NULL;
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
struct node* deleteAtFirst(struct  node* head)
{
    node* p = head;
    head = head->next;
    free(p);
    return head;
}

int main()
{
     node* p = create(4);
     node* q = create(3);
     node* r = create(7);
     node* s = create(6);

     p->next =q;
     q->next =r;
     r->next =s;

    print(p);
    p = deleteAtFirst(p); 
    print(p);

}