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
        flag= true;
        ll marker=-1;
        ll marker2=-1;
      cin>>n;
      vector<ll> v;
      fl(i,0,n) {
        cin>>k;
        if(marker!=-1) {
            if(marker+1==k) marker2=i;
        }
        v.pb(k);
        if(i+1!=k && flag) {
            marker=i; flag=false;
        }
      }
      //cout<<"Markrs are "<<marker<<" "<<marker2<<endl;
 
      if(marker==-1) {
        printvc(v);
      }
      else {
        fl(i,0,marker) cout<<v[i]<<" ";
      for(i=marker2; marker<=i; i--) cout<<v[i]<<" ";
     fl(i,marker2+1, v.size()) cout<<v[i]<<" ";
      }
     nl;
 
 
    }
 
  //cout<<endl; main();
}
 
 