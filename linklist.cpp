#include"bits/stdc++.h"
using namespace std;
struct node 
{
    int data;
    struct node *next;
};
struct node *first=NULL;
void create(int A[],int n)
{
 struct node *last;
 first=(struct node*)malloc(sizeof(struct node));
 first->data=A[0];
 first->next=NULL;
    last=first;
    
    for(int i=1;i<n;i++){
     last->next=(struct node*)malloc(sizeof(struct node));
     last=last->next;
     last->data=A[i];
      last->next=NULL;
    }
 }


void display(struct node *p)
{
    while(p!=0)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    system("cls");
    int A[5]={3,43,53,76,21};
    create(A,5);
    display(first);
    return 0;

}