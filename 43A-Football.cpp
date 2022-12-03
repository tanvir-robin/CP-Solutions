#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k;
    map<string,ll> m; string s;
    cin>>t; n=t;
    while(t--) {
        cin>>s;
        m[s]++;
    }
    if(m.size()==1) cout<<s;
    else {
        ll s1[2]; string n1[2];
        i=0;
        for(auto x : m) {
            n1[i]=x.first; s1[i]=x.second;
             i++;
        }
        if(s1[0]>s1[1]) cout<<n1[0]; else cout<<n1[1];
    }
 
 
  //cout<<endl; main();
}
 