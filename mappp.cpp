#include "bits/stdc++.h"
#include <iostream>
using namespace std;
int main()
{
  system("cls");
  map<int, int> person;
  person.insert({2, 39});
  person.insert({3, 30});
  person.insert({7, 35});
  person.insert({9, 398});
  person.insert({8, 3097});
  person.insert(pair<int,int>(12,23));

  // cout<<v[2]<<" "<<v[3]<<" ";
  for (auto itr = person.begin(); itr != person.end(); ++itr)
  {
    cout << itr->first <<" " << itr->second << endl;
  }
  return 0;
}