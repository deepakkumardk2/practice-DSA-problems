#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int[5];
    p[0]=11;
    p[1]=22;
    p[2]=98;
    p[3]=23;
    p[4]=234;
    p[5]=54;
    int *q;
    q=new int[5];
    for(int i=0;i<5;i++)
    {
        q[i]=p[i];
        cout<<q[i]<<endl;
        delete []p;
        cout<<p[i]<<endl;
        
    }


}