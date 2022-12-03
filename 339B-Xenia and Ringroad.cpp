#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
   ll t,n,i,j,k,res=0;
   cin>>n>>t;
   vector<ll> v;
   v.push_back(1);
   while(t--)
   {
       cin>>i;
       v.push_back(i);
   }
 
 
   for(i=1; i<v.size(); ++i)
   {
       if(v[i-1]<=v[i])
        res+=v[i]-v[i-1];
        else
       {
           res+=n-v[i-1]+v[i];
       }
   }
   cout<<res;
 
 
 
 
 
}