#include<iostream>
using namespace std;
int Max(int a,int b)
{
    if (a>b)
    return a;
    else
    return b;
}
int Max(float j,float k)
{
    if(j>k)
    return j;
    else 
    return k;
}


//write a Max() function template for 2 numbers

int main()
{
    cout<<Max(10,5)<<endl;
    cout<<Max(12.5f,17.3f);
    return 0;
}
