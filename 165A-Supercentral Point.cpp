#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y)        for(int i=x; i<y; i++)
#define flc(i,x,y,z)     for(int i=x; i<y; i+=z)
#define nl               cout<<endl
#define vsort(v)         sort(v.begin(), v.end());
#define vsortg(v)        sort(v.begin(), v.end(), greater<int>());
#define getIntoVc(v,n)   { while(n--) {long long yyy; cin>>yyy; v.push_back(yyy);}}
#define all(x)           x.begin(),x.end()
#define pb               push_back
#define printvc(v)       for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
#define strTOint(s,n)    {stringstream sst; sst<<s; sst>>n;}
#define intTOstr(n,s)    {stringstream sst; sst<<n; sst>>s;}
#define ff               first
#define ss               second
#define DouraMama        {ios::sync_with_stdio(false); cin.tie(NULL);}
#define prefixSum(v,p)   {long long sum=0; for(int i=0; i<v.size(); i++) {sum+=v[i];p.push_back(sum);}}
//--------------------------------------------------------------
 
int main()
{   DouraMama
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    bool flag=false;
    string s,s1,s2,s3;
    vector<ll> v;
    cin>>n;
    vector<pair<ll,ll>> cor;
    while(n--) {
        cin>>a>>b;
        cor.pb(make_pair(a,b));
    }
    fl(i,0,cor.size()) {
        bool U=false;
        bool L=false;
        bool R=false;
        bool LW=false;
        fl(j,0,cor.size()) {
            if(i!=j) {
                if(cor[j].ss==cor[i].ss) {
                    if(cor[j].ff>cor[i].ff) L=true;
                    else if(cor[j].ff<cor[i].ff) R=true;
                }
                if(cor[j].ff==cor[i].ff) {
                    if(cor[j].ss>cor[i].ss) U=true;
                    else if(cor[j].ss<cor[i].ss) LW=true;
                }
            }
        }
        if(U && L && R && LW)  cnt++;
    }
    cout<<cnt;
   
     
 
  //cout<<endl; main();
}
 
 