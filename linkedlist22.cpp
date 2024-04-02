#include"bits/stdc++.h"
using namespace std;
struct node{
    int data;
    node *link;
};



int main()
{
  node *head=new node;
  node *first=new node;
  node *second=new node;

  head->data=12;
  head->link=first;


  first->data=43;
  first->link=second;


  second->data=45;
  second->link=NULL;

  node *ptr=head;

 // cout<<ptr<<" ";
  while(ptr!=NULL)
  {
   cout<<ptr->data<<"-> ";
   ptr=ptr->link;
  }


return 0;
}