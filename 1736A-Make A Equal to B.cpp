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
#define prefixSum(v,prefix) {long long sum=0; for(int i=0; i<v.size(); i++) {sum+=v[i];prefix.push_back(sum);}}
//--------------------------------------------------------------
 
int main()
{   DouraMama
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    bool flag=false;
    string s,s1,s2,s3;
 
    cin>>t;
 
    while(t--) {
        cnt=0, ans=0;
      cin>>n;
      vector<ll> v1;
      vector<ll> v2;
      k=n;
      ll ar0=0, ar1=0, arr0=0, arr1=0;
       while(k--) {
        cin>>a;
        v1.pb(a);
        if(a) ar1++;
        else ar0++;
       }
       k=n;
       while(k--) {
        cin>>a;
        v2.pb(a);
        if(a) arr1++;
        else arr0++;
       }
      
      fl(i,0,v1.size()) {
        if(v1[i]!=v2[i]) cnt++;
      }
      ans=1;
      ans+=abs(ar0-arr0);
      cout<<min(cnt,ans)<<endl;
    
    }
 
  //cout<<endl; main();
}
 
 