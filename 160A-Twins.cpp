#include<bits/stdc++.h>
using namespace std;
 
 
typedef long long ll;
int main()
{
  ll i,j,k,n,t,sum=0;
  cin>>n;
  vector<ll> v;
  t=n;
  while(t--)
  {
      cin>>k;
      sum+=k;
      v.push_back(k);
  }
 
  float avg = sum/2.00;
 
  sort(v.begin(),v.end(),greater<ll>());
 
  ll balance=0;
  ll flag=0;
  for(i=0; i<v.size(); ++i)
  {
      balance+=v[i]; flag++;
      if(balance>avg)
        break;
  }
 
 
  cout<<flag;
 
 
 
}