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
        vector<ll> v;
        vector<ll> v1;
        cin>>n>>k;
        fl(i,0,n) {
            cin>>x;
            v.pb(x);
            if(i+1<=k) v1.pb(x);
        }
        cnt=0;
         vsort(v);
         vsort(v1);
        // printvc(v); nl;
        // printvc(v1); nl;
       fl(j,0,k) {
         vector<ll>::iterator it=find(all(v1),v[j]);
         if(it==v1.end()) cnt++;
       }
       cout<<cnt<<endl;
 
    }
 
  //cout<<endl; main();
}
 
 