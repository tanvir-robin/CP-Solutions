#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k,m;
    cin>>t;
    while(t--) {
            ll sum=0;
        cin>>n>>m;
        while(n--) {
            cin>>k; sum+=k;
        }
      if(sum<=m) cout<<0<<endl;
      else cout<<sum-m<<endl;
    }
 
 
  //cout<<endl; main();
}
 