#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y)              for(int i=x; i<y; i++)
#define flc(i,x,y,z)           for(int i=x; i<y; i+=z)
#define nl                     cout<<endl
#define vsort(v)               sort(v.begin(), v.end());
#define vsortg(v)              sort(v.begin(), v.end(), greater<pair<long long, long long>>());
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
    vector<ll> v;
    vector<pair<ll,ll>> ind;
    map<ll,ll> ranks;
    cin>>n>>k;
    while(n--) {
        cin>>x>>y;
        ind.pb(make_pair(x,50-y));
    }
    vsortg(ind);
   // fl(i,0,ind.size()) cout<<ind[i].ff<<" "<<50-ind[i].ss<<endl;
    ll rank=1;
    ranks[1]++;
    vector<pair<ll,ll>> rind;
    vector<ll> lb;
    lb.pb(rank);
    cnt=1;
    fl(i,1,ind.size()) {
      if(ind[i].ff == ind[i-1].ff && ind[i].ss == ind[i-1].ss) {
        cnt++;
         lb.pb(rank);
      }
      else {
        rank+=cnt; cnt=1;
        lb.pb(rank);
 
      }
      if(k<rank) break;
    }
  //  vsort(lb);
    // printvc(lb) ; nl;
    
    // auto xx = *lower_bound(all(lb),k);
    // cout<<"For "<<k<<" Upperbound is"<<xx<<endl;
//    if(xx!=0) xx--;
    cout<<count(all(lb),lb[k-1]);
 
}
int main()
{   RedCoderErPaDhowaPani
    AladinsLamp();
}
 
 