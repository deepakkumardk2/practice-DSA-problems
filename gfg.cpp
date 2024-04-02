// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n=5;
    int k=n,nc=n,p,t,c;
   for(int i=0;i<nc;i++){
       p=nc;
       while(p){
        t=n;
        c=p;
        while(t--){
         cout<<c;
        }
        p--;
       }
       cout<<endl;
       n--;
   }

    return 0;
}