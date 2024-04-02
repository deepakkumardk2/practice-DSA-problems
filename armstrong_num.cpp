#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

void printlist(node *n){
    while (n!=NULL)
    {
       cout<<n->data<<endl; 
       n=n->next;
    }
    

}

int main()
{
    node *head = new node();
    node *first = new node();
    node *second = new node();
    node *third = new node();
    node *naya = new node();      //at starting

    head->next = naya;


    naya->data=19;
    naya->next=first;

    first->data = 12;
    first->next = second;

    second->data=23;
    second->next=third;

    third->data=43;
    third->next=NULL;
    
    printlist(head);

    // first node

    return 0;
}