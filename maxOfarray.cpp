#include<iostream>
using namespace std;
int main()
{
 cout<<"maximum of array is";
 int arr[]={12,34,43,67,88,90,0};
 int max=arr[0];
 for(int i=1;i<6;i++)
 {
    if(max<arr[i])
    {
        max=arr[i];
    }
    
 }
 cout<<max;
}