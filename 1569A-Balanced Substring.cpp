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
#define ff first
#define ss second
#define DouraMama {ios::sync_with_stdio(false); cin.tie(NULL);}
//--------------------------------------------------------------
 
bool checker(string s) { ll i;
      map<char,ll> mp;
      fl(i,0,s.size()) mp[s[i]]++;
        if(mp['a']==mp['b']) return true; else return false;
 
}
 
int main()
{   DouraMama
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    bool flag=false;
    string s,s1,s2,s3;
 
    cin>>t;
 
    while(t--) {
      flag=false;
        cin>>n;
        cin>>s;
        fl(i,0,s.size()) {
          fl(j,i+1,s.size()) {
             s1=s.substr(i,j-i+1);
             if(checker(s1)) {
                cout<<i+1<<" "<<j+1<<endl; flag=true;
                 break;
             }
          }
          if(flag) break;
        }
        if(!flag) cout<<"-1 -1"<<endl;
 
    }
 
 
 
  //cout<<endl; main();
}
 
 