#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int t,n,i,j,k;
  cin>>t;
  vector<int> odd;
  vector<int> ev;
 
  for(int i=1; i<=t; ++i)
  {
      cin>>n;
      if(n%2)
        odd.push_back(i);
      else ev.push_back(i);
 
  }
 
  if(odd.size()==1)
    cout<<odd[0];
  else cout<<ev[0];
 
}