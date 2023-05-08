#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y)              for(int i=x; i<y; i++)
#define flc(i,x,y,z)           for(int i=x; i<y; i+=z)
#define nl                     cout<<endl
#define vsort(v)               sort(v.begin(), v.end());
#define vsortg(v)              sort(v.begin(), v.end(), greater<long long>());
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
 
int main()
{   RedCoderErPaDhowaPani
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,res=0;
    bool flag=false;
    string s,s1,s2,s3;
    vector<ll> ev;
    vector<ll> odd;
    cin>>n;
    while(n--) {
        cin>>x;
        if(x%2) odd.pb(x);
        else ev.pb(x);
    }
    ll evs = ev.size();
    ll odds = odd.size();
 
    if(evs>odds) {
        vsortg(ev);
        ans=accumulate(ev.begin()+odds+1, ev.end(),0);
        cout<<ans;
 
    }
    else if(evs<odds) {
        vsortg(odd);
        ans=accumulate(odd.begin()+evs+1, odd.end(),0);
        cout<<ans;
    }
    else cout<<0;
   
     
 
  //cout<<endl; main();
}
 
 