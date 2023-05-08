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
    ll bun,peti,chicken,priceham,pricechick;
    while(t--) {
        ll profit=0;
      cin>>bun>>peti>>chicken>>priceham>>pricechick;
      if(priceham>pricechick) {
         if(2*peti<=bun) {
            profit+=peti*priceham;
            bun-=peti*2;
         }
         else {
            ll have = bun/2;
            profit+=have*priceham;
            peti-=have;
            bun=0;
         }
 
         if(2*chicken<=bun) {
            profit+=chicken*pricechick;
            bun-=chicken*2;
         }
         else {
            ll have = bun/2;
            profit+=have*pricechick;
            chicken-=have;
            bun=0;
         }
 
 
      }
      else {
         if(2*chicken<=bun) {
            profit+=chicken*pricechick;
            bun-=chicken*2;
         }
         else {
            ll have = bun/2;
            profit+=have*pricechick;
            chicken-=have;
            bun=0;
         }
 
          if(2*peti<=bun) {
            profit+=peti*priceham;
            bun-=peti*2;
         }
         else {
            ll have = bun/2;
            profit+=have*priceham;
            peti-=have;
            bun=0;
         }
 
      }
      cout<<profit<<endl;
 
    }
 
  //cout<<endl; main();
}
 
 