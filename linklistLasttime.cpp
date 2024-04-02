#include"bits/stdc++.h"
using namespace std;
struct node{
    int data;
    node *next;
};
void printList(node *n)
{
    int count=0;
    while(n==NULL)
    {
        count++;
      cout<<n->data<<endl;
      n=n->next;
    }
}

int main ()
{
    node *head=new node();
    printList;
    return 0;
}