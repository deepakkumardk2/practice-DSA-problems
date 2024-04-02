#include"bits/stdc++.h"
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
   cout<< v.size()<<endl;
   sort(v.begin(),v.end());
   for(int i=0;i<4;i++)
   cout<<v[i]<<" ";
   /*for(int i=0;i<4;i++)
    cout<<v[i]<<" " <<endl;
    v.clear();
    for(int i=0;i<4;i++)
    cout<<v[i]<<" ";*/

}