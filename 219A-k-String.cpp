#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y)        for(int i=x; i<y; i++)
#define flc(i,x,y,z)     for(int i=x; i<y; i+=z)
#define nl               cout<<endl
#define vsort(v)         sort(v.begin(), v.end());
#define vsortg(v)        sort(v.begin(), v.end(), greater<int>());
#define getIntoVc(v,n)   { while(n--) {long long yyy; cin>>yyy; v.push_back(yyy);}}
#define all(x)           x.begin(),x.end()
#define pb               push_back
#define printvc(v)       for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
#define strTOint(s,n)    {stringstream sst; sst<<s; sst>>n;}
#define intTOstr(n,s)    {stringstream sst; sst<<n; sst>>s;}
#define ff               first
#define ss               second
#define DouraMama        {ios::sync_with_stdio(false); cin.tie(NULL);}
#define prefixSum(v,p)   {long long sum=0; for(int i=0; i<v.size(); i++) {sum+=v[i];p.push_back(sum);}}
//--------------------------------------------------------------
 
int main()
{   DouraMama
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    bool flag=false;
    string s,s1,s2,s3;
    vector<ll> v;
    cin>>n>>s;
    map<char, ll> mp;
    fl(i,0,s.size()) mp[s[i]]++;
    for(auto xx:mp) {
       v.pb(xx.ss);
    }
    if(mp.size()>=2)
    ans=__gcd(v[0],v[1]);
    else ans=1;
    fl(i,2,v.size()) {
        ans=__gcd(v[i],ans);
    }
    if(mp.size()==1) {
        if(n<=s.size()) cout<<s;
        else cout<<-1;
    }
    else if(ans<n) cout<<-1;
    else {
        fl(j,0,ans){
            for(auto xx:mp) {
            fl(i,0,xx.ss/ans) cout<<xx.ff;
        }}
    }
   
     
 
  //cout<<endl; main();
}