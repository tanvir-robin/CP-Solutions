#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y) for(int i=x; i<y; i++)
#define flc(i,x,y,z) for(int i=x; i<y; i+=z)
#define nl cout<<endl
#define vsort(v) sort(v.begin(), v.end());
#define vsortg(v) sort(v.begin(), v.end(), greater<int>());
#define getIntoVc(v,n) { while(n--) {long long yyy; cin>>yyy; v.push_back(yyy);}}
#define all(x) x.begin(),x.end()
#define pb push_back
#define printvc(v) for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
#define strTOint(s,n) {stringstream sst; sst<<s; sst>>n;}
#define intTOstr(n,s) {stringstream sst; sst<<n; sst>>s;}
#define ff first
#define ss second
#define DouraMama {ios::sync_with_stdio(false); cin.tie(NULL);}
//--------------------------------------------------------------
 
int main()
{   DouraMama
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    bool flag=false;
    string s,s1,s2,s3;
 
    cin>>t;
 
    while(t--) {
        ll n1,n2,n3,n4;
        cin>>n1>>n2>>n3>>n4;
        ll big=max(n4,max(n1,max(n2,n3)));
        ll sm=min(n4,min(n1,min(n2,n3)));
        pair<ll,ll> p1;
        pair<ll,ll> p2;
        if((big==n1 && sm==n4) || (big==n4 && sm==n1) || (big==n2 && sm==n3) || (big==n3 && sm==n2)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
 
    }
 
  //cout<<endl; main();
}
 
 