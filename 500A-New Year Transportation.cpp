#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
 
    ll n,t,i,j,k;
    cin>>n>>t;
    vector<ll> v;
    n--;
    while(n--)
    {
        cin>>k;
        v.push_back(k);
    }
    ll ans=1;
 
    while(ans<t)
    {
        ans+=v[ans-1];
    }
 
    if(ans==t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
    //cout<<endl; main();
}