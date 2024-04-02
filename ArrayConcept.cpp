#include"bits/stdc++.h"
using namespace std;
int main()
{
    system("cls");
    int key;
    int arr[]={12,23,43,54,76};
    int size=sizeof(arr)/sizeof(int);
    cout<<"enter a key want to search";
    cin>>key;
   //searching key element from array,
   for(int i=0;i<size;i++)
   {
    if(key==arr[i])
    cout<<" found "<<i;

   }
   cout<<"not found";
}