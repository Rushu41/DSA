
#include<iostream>
using namespace std;
struct node{
   int data;
   struct node* next;
};
struct node* create(int data)
{
    struct node* n = (struct node*)malloc(sizeof(struct node*));
    n->data = data;
    n->next = NULL;
}
void linklist(struct node* link)
{
    node* current = link;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
}
struct node* insertfirst(struct node* head, int data)
{
    struct node* ptr = (node*)malloc(sizeof(node*));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
int main()
{
    node* p = create(4);
    node* q = create(5);
    node* r = create(6);

    p->next = q;
    q->next = r;

    p = insertfirst(p,23);
    linklist(p);

}
