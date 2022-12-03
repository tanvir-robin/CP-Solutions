#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,i,x,maxi;
  cin>>t;
  while(t--)
  {
      cin>>n;
      map<int,int> m;
      for(i=0; i<n; i++)
      {
          cin>>x;
          m[x]++;
      }
      maxi=0;
      for(auto it : m)
      {
          if(maxi<it.second)
            maxi=it.second;
      }
      cout<<maxi<<endl;
  }
}