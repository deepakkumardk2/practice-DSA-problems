#include"bits/stdc++.h"
using namespace std;
int fact(int);
int main()
{
    int n=5,ans;
   ans= fact(n);
   cout<<ans;
   return 0;
}

int fact(int n){
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);;
}