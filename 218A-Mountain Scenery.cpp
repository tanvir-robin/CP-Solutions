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
//--------------------------------------------------------------
 
int main()
{
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    bool flag=false;
    string s,s1,s2,s3;
    cin>>n>>k;
    vector<ll> v;
    x=(2*n)+1;
    while(x--) {
        cin>>y; v.pb(y);
    }
     x=0;
        flc(i,1,v.size(),2) {
            ans=v[i]-1;
            if(v[i-1]<ans && ans>v[i+1]) {
                v[i]--; x++;
            }
            if(k==x) break;
        }
      printvc(v);
 
 
  //cout<<endl; main();
}
 
 