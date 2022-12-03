#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll finder(ll n1,ll n2, ll m) {
 
   for(ll i=n1; i<=n2; i++) {
       if(i%m==0) return i;
   }
   return -1;
 
}
 
 
int main()
{
    ll n,t,i,j,k,n1,n2,m;
    cin>>n>>m;
    if(n%2) {
        n1=(n/2)+1;
        n2=n;
        cout<<finder(n1,n2,m);
    }
    else {
         n1=(n/2);
        n2=n;
        cout<<finder(n1,n2,m);
    }
 
  //cout<<endl; main();
}
 