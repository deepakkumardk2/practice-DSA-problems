#include"bits/stdc++.h"
using namespace std;
struct node{
    int data;
    struct node *next;
};
int main()
{
    node *m;
    m=(struct node*) sizeof(struct node);
    m->data=12;
    cout<<m->data;
    
}
