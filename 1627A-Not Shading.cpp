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
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,r;
    bool flag=false;
    string s,s1,s2,s3;
 
    cin>>t;
 
    while(t--) {
       cin>>n>>m>>r>>c;
       string ss[n];
       ll B=0;
       fl(i,0,n) {
        cin>>ss[i];
        if(!B) {
            ll x =count(all(ss[i]),'B');
            if(x>0) B+=x;
        }
       }
       if(ss[r-1][c-1]=='B') ans=0;
       else 
       {ans=-1;
       if(B) {
           ll x=count(all(ss[r-1]),'B');
           if(x>0) ans=1;
           else {
             fl(i,0,n) {
                if(ss[i][c-1]=='B') {
                    ans=1; break;
                }
             }
           }
           if(ans==-1) ans=2;
       }}
       cout<<ans<<endl;
 
    }
 
  //cout<<endl; main();
}
 
 