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
    ll n,m,t,i,j,k,x,y,z,a,b,c,q,cnt=0,ans=0,l,r;
    bool flag=false;
    string s,s1,s2,s3;
 
    cin>>t;
 
    while(t--) {
         cin>>n>>q;
         vector<ll> v;
         vector<ll> p;
         getIntoVc(v,n);
         prefixSum(v,p);
         ans=accumulate(all(v),0);
         ll sum=0;
         while(q--) {
            cin>>l>>r>>k;
            ll nn = r-l+1;
            l--;r--;
             if(l==0) sum=p[r];
             else {
                l--;
                sum=p[r]-p[l];
             }
           
            // cout<<"Vec is"<<endl;
            // printvc(p);
            // cout<<"Prefix sum is "<<sum<<endl;
            ll xx=ans-sum+(nn*k);
            if(xx%2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
         }
 
    }
 
  //cout<<endl; main();
}
 
 