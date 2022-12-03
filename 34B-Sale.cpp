#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k,m;
    vector<ll> v;
    cin>>n>>m;
    while(n--) {
        cin>>k;
        if(k<0)
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    ll ans=0;
    for(i=0; i<m && i<v.size(); i++) {
          ans+=v[i]*(-1);
    }
    cout<<ans;
 
    //cout<<endl; main();
}
 