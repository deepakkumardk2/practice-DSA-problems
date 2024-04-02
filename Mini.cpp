#include<iostream>
using namespace std;

int Min(int a,int b)
{
    if(a<b)
    return a;
    else
    return b;
}
int Min(int a,int b,int c)
{
    if(a<b && a<c)
    return a;
    else if(b<c)
    return b;
    else 
    return c;
}
float Min(float j,float k)
{
    if(j<k)
    return j;
    else
    return k;
}

int main()
{
    cout<<Min(10,5);
    cout<<Min(12,7,9);
    cout<<Min(18.0f,9.0f);
    return 0;
}
