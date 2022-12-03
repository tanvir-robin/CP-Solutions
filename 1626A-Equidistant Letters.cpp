#include<bits/stdc++.h>
using namespace std;
 
typedef long long  ll;
 
int main()
{
  ll t,i,j,k;
  cin>>t;
  string s;
  while(t--)
  {
      cin>>s;
      map<char, ll> m;
 
      for(i=0; i<s.size(); i++)
        m[s[i]]++;
 
      for(auto it:m)
      {
          if(it.second==2)
            cout<<it.first;
      }
      for(auto it:m)
      {
          if(it.second==1)
            cout<<it.first;
      }
      for(auto it:m)
      {
          if(it.second==2)
            cout<<it.first;
      }
      cout<<endl;
  }
}