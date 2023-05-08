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
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,r,s;
    bool flag=false;
    string s1,s2,s3;
 
    cin>>t;
 
    while(t--) {
       cin>>n>>s>>r;
       ll rrr=s-r;
       cout<<rrr<<" ";
       ans=r%(n-1);
       cnt=r/(n-1);
       fl(i,1,n) {
          if(ans!=0 && cnt<6) {
              if(rrr-cnt<=ans) {
                cout<<rrr<<" ";
                ans-=rrr-cnt;
              }
              else {
                cout<<cnt+ans<<" ";
                ans=0;
              }
          }
          else cout<<cnt<<" ";
       }
       nl;
 
    }
 
  //cout<<endl; main();
}
 
 