#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k;
    cin>>n;
   for(i=2; i<n; i++) {
    if(!(n%i)) {
        cout<<i<<n/i; break;
    }
   }
 
 
  //cout<<endl; main();
}
 