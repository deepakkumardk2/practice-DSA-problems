#include<iostream>
using namespace std;
int main()
{
    system("cls");
   int arr[]={12,5,7,1,6,67};
   int min=arr[0];
    for( int i=1;i<6;i++)
    {
        if(min>arr[i])
        {
          min=arr[i];
        }
    
    }
    cout<<min<<" ";
}

