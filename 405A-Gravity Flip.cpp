#include<bits/stdc++.h>
using namespace std;
 
 
typedef long long ll;
int main()
{
   ll n,k,i;
   vector<ll> v;
   cin>>n;
   while(n--)
   {
       cin>>k;
       v.push_back(k);
   }
   sort(v.begin(),v.end());
 
   for(int i=0; i<v.size(); i++)
      cout<<v[i]<<" ";
}