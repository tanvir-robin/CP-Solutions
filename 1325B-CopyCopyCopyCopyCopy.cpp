#include<bits/stdc++.h>
using namespace std;
 
typedef long long  ll;
 
int main()
{
     ll t,i,j,k,l,n;
     cin>>t;
     while(t--)
     {
         cin>>n;
         set<int> s;
         while(n--)
         {
             cin>>l;
             s.insert(l);
         }
         cout<<s.size()<<endl;
 
     }
 
}