#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y)              for(int i=x; i<y; i++)
#define flc(i,x,y,z)           for(int i=x; i<y; i+=z)
#define nl                     cout<<endl
#define vsort(v)               sort(v.begin(), v.end());
#define vsortg(v)              sort(v.begin(), v.end(), greater<pair<long long,long long>>());
#define getIntoVc(v,n)         { while(n--) {long long yyy; cin>>yyy; v.push_back(yyy);}}
#define all(x)                 x.begin(),x.end()
#define pb                     push_back
#define printvc(v)             for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
#define strTOint(s,n)          {stringstream sst; sst<<s; sst>>n;}
#define intTOstr(n,s)          {stringstream sst; sst<<n; sst>>s;}
#define ff                     first
#define ss                     second
#define RedCoderErPaDhowaPani  {ios::sync_with_stdio(false); cin.tie(NULL);}
#define prefixSum(v,p)         {long long sum=0; for(int i=0; i<v.size(); i++) {sum+=v[i];p.push_back(sum);}}
//--------------------------------------------------------------
 
void AladinsLamp() {
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,res=0;
    bool flag=false;
    string s,s1,s2,s3;
    vector<ll> ti;
    vector<ll> e;
    cin>>n>>t;
    fl(i,0,n){
      cin>>x; ti.pb(x);
    }
    fl(i,0,n){
      cin>>x; e.pb(x);
    }
   vector<pair<ll,ll>> ind;
  for(i=0; i<n && t; i++) {
    if(ti[i]<=t) {
        ind.pb(make_pair(e[i],i+1));
    }
    t--;
   }
   if(!(ind.size()>0)) {
    cout<<-1<<endl; return;
   }
   vsort(ind);
   cout<<ind[ind.size()-1].ss<<endl;
  // fl(i,0,ind.size()) cout<<ind[i].ff<<"|"<<ind[i].ss<<" ";
   //nl;
  //cout<<ind[0].ff<<endl;
 
 
}
 
int main()
{   RedCoderErPaDhowaPani
    ll t;
    cin>>t;
    while(t--) AladinsLamp();
}
 
 