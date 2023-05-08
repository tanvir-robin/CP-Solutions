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
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,sum=0;
    bool flag=false;
    string s,s1,s2,s3;
    vector<ll> v;
    cin>>n;
    t=7;
    while(t--) {
        cin>>x;
        sum+=x;
        v.pb(x);
    }
    ll res=-1;
    if(sum<n) {
        ans=n%sum;
        ll x=0;
        if(ans){fl(i,0,v.size()) {
          x+=v[i];
          if(x>=ans) {
             res=i+1; break;
          }
        }}
        else {
            for(i=v.size()-1; i>=0; i--) {
          
          if(v[i]) {
             res=i+1; break;
          }
        }
        }
    }
    else {
        ans=n;
        ll x=0;
        fl(i,0,v.size()) {
          x+=v[i];
          if(x>=ans) {
             res=i+1; break;
          }
        }
    }
    cout<<res;
   
     
 
  //cout<<endl; main();
}
 
 