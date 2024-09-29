#include<iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
};

struct node* create(int data)
{
    struct node* n = new node;
    n->data = data;
    n->next = NULL;
    return n;
}

void print(struct node* ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << "\n";
}

void circularlinklist(struct node* head)
{
    struct node* p = head;
    do {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
    cout << "\n";
}

struct node* insertAtFirst(struct node* head, int data)
{
    struct node* ptr = new node;
    ptr->data = data;
    struct node* p = head;

    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{
    node* p = create(4);
    node* q = create(9);
    node* r = create(2);
    node* s = create(6);
    node* t = create(2);

    p->next = q;
    q->next = r;
    r->next = s;
    s->next = t;
    t->next = p;

    p = insertAtFirst(p, 32);

    circularlinklist(p);

    return 0;
}
