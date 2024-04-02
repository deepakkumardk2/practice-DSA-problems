#include<iostream>
using namespace std;
struct node
{
    int info;
    struct node *next;   
};

struct node *stack;
void remove_stack(struct node **s)
{
    while(*s!=NULL)
    pop(s);
}

int pop(struct node **s)
{
    int item;
    struct node *r;    
    if(*s=NULL)
    {
      cout<<"stack is underflow"<<endl;
      return ;
    }
    else{
         item= (*s)->info;
         r=(*s);
         *s=r->next;
         free(r);
         return(item);
    }
}




int peek(struct node **s)
{
    if(*s==NULL)
    {
    cout<<"stack is empty"<<endl;
    return;
     }
     else{
        return((*s)->info);
     }
}



struct node *creating_node()
{
 struct node *ptr;
 ptr=(struct node*)malloc(sizeof(struct node));
 return (ptr);
}


void push(struct node **s,int info)
{
    struct node *n;
    n=creating_node();
    if(n!=NULL)
    {
    n->info=info;
    n->next=*s;
    *s=n;
    }

}


int main()
{
    system("cls");
 struct node *stack;
 push(&stack,12);
 push(&stack,20);
 push(&stack,240);
 push(&stack,50);
 push(&stack,90);
 cout<<pop(&stack);
 cout<<peek(&stack);


}