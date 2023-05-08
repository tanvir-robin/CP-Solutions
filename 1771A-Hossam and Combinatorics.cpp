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
 
ll fact(ll n)
{
    if (n <= 1)
        return 1;
    return n*fact(n-1);
}
 
ll nPr(ll n, ll r)
{
    return fact(n)/fact(n-r);
}
 
int main()
{   DouraMama
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    bool flag=false;
    string s,s1,s2,s3;
 
    cin>>t;
 
    while(t--) {
           cin>>n;
           m=n;
           vector<ll> v;
           while(n--) {
              cin>>k; v.pb(k);
           }
           ll b=*max_element(all(v));
           ll s=*min_element(all(v));
 
           ll high=count(all(v),s);
           ll low=count(all(v),b);
           if(b!=s)
           cout<<2*low*high<<endl;
           else {
             cout<<m*(m-1)<<endl;
           }
 
    }
 
  //cout<<endl; main();
}
 
 