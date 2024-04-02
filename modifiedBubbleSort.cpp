#include<iostream>
using namespace std;
void BubbleSort(int arr[],int N)
{ 
int round,i,temp;
for(i=0;i<N-1;i++)
{
    for(int j=0;j<N-1-round;j++)
    {
      if(arr[j]>arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
}

}
int main()
{
    system("cls");
 int N;
 cin>>N;
 int arr[N]={};
 for(int i=0;i<N;i++)
 {
    cin>>arr[i];
 }
 BubbleSort(arr,N);
 for(int j=0;j<N;j++)
 {
  cout<<arr[j]<<" ";
 }
}