#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y)              for(long long i=x; i<y; i++)
#define flc(i,x,y,z)           for(long long i=x; i<y; i+=z)
#define nl                     cout<<'\n'
#define vsort(v)               sort(v.begin(), v.end());
#define vsortg(v)              sort(v.begin(), v.end(), greater<long long>());
#define getIntoVc(v,n)         {long long k=n; while(k--) {long long yyy; cin>>yyy; v.push_back(yyy);}}
#define sumvc(v)               accumulate(v.begin(),v.end(),0LL)
#define all(x)                 x.begin(),x.end()
#define pb                     push_back
#define printvc(v)             for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
#define strTOint(s,n)          {stringstream sst; sst<<s; sst>>n;}
#define intTOstr(n,s)          {stringstream sst; sst<<n; sst>>s;}
#define ff                     first
#define ss                     second
#define RedCoderErPaDhowaPani  {ios::sync_with_stdio(false); cin.tie(NULL);}
#define prefixSum(v,p)         {long long sum=0; for(int i=0; i<v.size(); i++) {sum+=v[i];p.push_back(sum);}}
//--------------------------------------------------------------
 
void AladinsLamp() {
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,res=0,sum=0;
    bool flag=false;
    string s,s1,s2,s3;
    vector<ll> v;
    cin>>n;
    vector<pair<ll,string>> vcc00;
    vector<pair<ll,string>> vcc11;
    vector<pair<ll,string>> vcc10;
    vector<pair<ll,string>> vcc01;
    while(n--) {
      cin>>x>>s;
       if(s=="00") vcc00.pb(make_pair(x,s));
       if(s=="10") vcc10.pb(make_pair(x,s));
       if(s=="11") vcc11.pb(make_pair(x,s));
       if(s=="01") vcc01.pb(make_pair(x,s));
    }
 
    vsort(vcc00);
    vsort(vcc11);
    vsort(vcc01);
    vsort(vcc10);
    if(vcc11.size()) ans= vcc11[0].ff;
    if(vcc10.size() && vcc01.size()) res = vcc01[0].ff+vcc10[0].ff;
    if(ans && res) {cout<<min(ans,res)<<endl; return;}
    else if(ans) {cout<<ans<<endl;return;}
    else if(res){ cout<<res<<endl;return;}
 
    cout<<-1<<endl;
 
 
 
}
int main()
{   RedCoderErPaDhowaPani
    ll t; cin>>t;
    while(t--) AladinsLamp();
}
 
 