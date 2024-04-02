#include<iostream>
using namespace std;
struct node
    {
        int data;
        node *next;

    };
    void insertHead(node* head,int d)
    {
        node *temp;
        temp->data=d;
        temp->next=head;
        head=temp;

    }

    void Displaydata(node* head)
    {
        while (head!=NULL)
        {
         
        }
        
       cout<<head->data<<" ";
    }

int main()
{
    
node *head=new node();
head->data=02;
head->next=NULL;
    Displaydata(head);
    insertHead(head,2002);
    
    
    return 0;
}