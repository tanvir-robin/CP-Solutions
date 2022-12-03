#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
     ll n;
     string s;
     cin>>n>>s;
     ll L=0,R=0;
 
     for(ll i=0; i<n; i++)
     {
         if(s[i]=='L')
            L++;
            else R++;
     }
     cout<<L+R+1;
}