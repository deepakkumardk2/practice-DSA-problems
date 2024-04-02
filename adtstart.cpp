#include"bits/stdc++.h"
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    cout<<"elements are<<\n";
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.A[i];
    }
}
int main()
{
 struct Array arr;
 int n,i;
 cout<<"enter the size of array\n";
 scanf("%d",&arr.size);
 arr.A=(int *)malloc(arr.size*sizeof(int));
 arr.length=0;
 cin>>n;
cout<<"enter all the key";
 for(i=0;i<=n;i++)
 cin>>arr.A[i];
 arr.length=n;
 Display(arr);

}
