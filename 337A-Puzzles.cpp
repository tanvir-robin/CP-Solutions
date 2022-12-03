#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll i,j,k,t,n;
    cin>>n>>t;
    n--;
    vector<ll> v;
    while(t--)
    {
        cin>>k;
        v.push_back(k);
    }
 
    sort(v.begin(),v.end());
 
 
    ll x=numeric_limits<ll>::max();
 
    for(i=0; i<v.size()-n; ++i)
    {
       // cout<<"Difference now : "<<v[i+3]-v[i]<<endl;
        x = min(x, (v[i+n]-v[i]));
    }
    cout<<x;
}