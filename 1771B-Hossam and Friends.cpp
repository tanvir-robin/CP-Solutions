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
#define printvc(v) for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
#define strTOint(s,n) {stringstream sst; sst<<s; sst>>n;}
#define intTOstr(n,s) {stringstream sst; sst<<n; sst>>s;}
#define ff first
#define ss second
#define DouraMama {ios::sync_with_stdio(false); cin.tie(NULL);}
//--------------------------------------------------------------
 
int main()
{   DouraMama
    ll n,m,t,i,j,k,x,y,z,a,b,n1,n2,c,cnt=0,ans=0;
    bool flag=false;
    string s,s1,s2,s3;
 
    cin>>t;
 
    while(t--) {
       cin>>n>>m; cnt=0;
       vector<ll> v(n+1,1);
       while(m--) {
        cin>>n1>>n2;
        if(n1>n2) v[n1]=max(v[n1],n2+1);
        else if(n1<n2) v[n2]=max(v[n2],n1+1);
       }
       fl(i,1,v.size()) {
        v[i]=max(v[i],v[i-1]);
        cnt+=i-v[i]; cnt++;
       }
       cout<<cnt<<endl;
 
    }
 
  //cout<<endl; main();
}
 
 