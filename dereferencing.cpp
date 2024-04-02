#include<iostream>
using namespace std;
int main()
{
    int x=12;
   int *y=&x;
    cout<<*&x<<endl;
    cout<<*y<<endl;
}