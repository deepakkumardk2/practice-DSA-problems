#include<bits/stdc++.h>
using namespace std;
struct Array
{
  int *A;
  int size;
  int length;
    
} ;

// void append(int x)
// {
// arr[length]=x;  

// }

void Display(struct Array arr)
{
   cout<<endl<<"elements are\n";
  for(int i=0;i<arr.length;i++)
  cout<<arr.A[i];
  

}

int main()
{
  int n,x;
  struct Array arr;
  cout<<"sizeof array"<<arr.size;
  arr.A=(int*)malloc(arr.size*sizeof(int));
  arr.length=0;
  cout<<"enter the number"<<endl;
  cin>>n;
  cout<<"enter all the number "<<endl;
  for (int i = 0; i<=n; i++)
  {
    cout<<arr.A[i];
  }
  arr.length=n;
  Display(arr);
  
    return 0;
}
