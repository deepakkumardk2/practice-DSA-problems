#include<iostream>
using namespace std;
int main()
{
    system("cls");
    cout<<"enter size of array\n";
    int n,key;
    cin>>n;
    int arr[n];
    cout<<"enter elements in array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter a kay want to search\n";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            cout<<"found at index"<<i<<endl;
        }

    }
     cout<<"not Found";
}