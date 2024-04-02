#include "bits/stdc++.h"
using namespace std;

class node
{
public:
    int val;
    node *next;

    node(int data)
    {
        val = data;
        next = NULL;
    }
};

void InsertAtfirst(node *&head, int val)
{
    node *firstnode = new node(val);
    firstnode->next = head;
    head = firstnode;
}

void insertAtPosition(node * &head,int val,int pos)
{
   if(pos==0)
   {
    InsertAtfirst(head,value);
    return;
   }
   node *temp=head;
   int current_pos=0;
   while(current_pos!=pos-1)
   {
    temp=temp->next;
    current_pos++;
   }
}


void insertAtend(node* &head, int val)
{
    node *newnode = new node(val);
    node *temp = head;
    while (temp->next!= NULL)
    {
        temp = temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "-> ";
        temp = temp->next;
    }
}

int main()
{
    system("cls");
    node *head = NULL;
    InsertAtfirst(head, 20);
    InsertAtfirst(head, 26);
    InsertAtfirst(head, 25);
    InsertAtfirst(head, 29);
    display(head);
    insertAtend(head,2002);
    display(head);
    return 0;
}