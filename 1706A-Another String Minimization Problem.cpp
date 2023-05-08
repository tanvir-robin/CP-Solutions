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
    string s1,s2,s3;
 
    cin>>t;
 
    while(t--) {
        string s;
       cin>>n>>m;
       fl(i,0,m) s+='B';
       vector<ll> v;
       getIntoVc(v,n);
       fl(i,0,v.size()) {
         ll c1=v[i]-1;
         ll c2=m-v[i];
         //cout<<"Min and MAx "<<min(c1,c2)<<" "<<max(c1,c2)<<endl;
         if(s[min(c1,c2)]!='A') s[min(c1,c2)]='A';
         else s[max(c1,c2)]='A';
       }
       cout<<s<<endl;
 
    }
 
  //cout<<endl; main();
}
 
 