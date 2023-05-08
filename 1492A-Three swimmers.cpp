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
    ll n,p,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    bool flag=false;
    string s,s1,s2,s3;
 
    cin>>t;
 
    while(t--) {
       cin>>p>>a>>b>>c;
       ans=LONG_LONG_MAX;
       if(p<=a) ans=min(ans,a-p);
       else {
         if(p%a==0) ans=min(ans,p%a);
         else {
            ll tmp=p/a;
            tmp++;
           
            ans=min(ans,(a*tmp)-p);
             //cout<<"Ans is "<<ans<<endl;
         }
       }
 
       if(p<=b) ans=min(ans,b-p);
       else {
         if(p%b==0) ans=min(ans,p%b);
         else {
            ll tmp=p/b;
            tmp++;
            ans=min(ans,(b*tmp)-p);//cout<<"Ans is "<<ans<<endl;
         }
       }
 
       if(p<=c) ans=min(ans,c-p);
       else {
         if(p%c==0) ans=min(ans,p%c);
         else {
            ll tmp=p/c;
            tmp++;
            ans=min(ans,(c*tmp)-p);//cout<<"Ans is "<<ans<<endl;
         }
       }
      cout<<ans<<endl;
    }
 
  //cout<<endl; main();
}
 
 