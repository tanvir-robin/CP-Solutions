#include<bits/stdc++.h>
using namespace std;
 
 
typedef long long ll;
int main()
{
  ll a,b,c;
  cin>>a>>b>>c;
 
   vector<ll> v;
   v.push_back(a+b+c);
   v.push_back((a+b)*c);
   v.push_back((a*b*c));
   v.push_back(a*(b+c));
 
  ll ans = *max_element(v.begin(),v.end());
  cout<<ans;
 
}