#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y) for(i=x; i<y; i++)
#define flc(i,x,y,z) for(i=x; i<y; i+=z)
#define nl cout<<endl
#define vsort(v) sort(v.begin(), v.end());
#define vsortg(v) sort(v.begin(), v.end(), greater<int>());
#define all(x) x.begin(),x.end()
#define pb push_back
//--------------------------------------------------------------
 
int main()
{
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    bool flag=false;
    string s,s1,s2,s3;
 
    cin>>t;
 
    while(t--) {
        cin>>n;
        vector<ll> v;
        vector<ll> v1;
        while(n--) {
            cin>>c;
            v.pb(c);
            v1.pb(c);
        }
        vsortg(v);
        ans=v[0];
        ll ans2=v[1];
 
        fl(i,0,v1.size()) {
           if(v1[i]!=ans) cout<<v1[i]-ans<<" ";
           else cout<<v1[i]-ans2<<" ";
        }
        nl;
 
    }
 
  //cout<<endl; main();
}
 
 