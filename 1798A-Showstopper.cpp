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
 
    cin>>t;
 
    while(t--) {
      cin>>n;
      vector<ll> v1;
      vector<ll> v2;
      flag=true;
      a=n;
      getIntoVc(v1,n);
      getIntoVc(v2,a);
      
      fl(i,0,v1.size()) {
        ll mn=min(v1[i],v2[i]);
        ll mx=max(v1[i],v2[i]);
         v1[i]=mn;
         v2[i]=mx;
      }
      if((v1[v1.size()-1]==*max_element(all(v1))) && (v2[v2.size()-1]==*max_element(all(v2)))) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
 
    } 
 
  //cout<<endl; main();
}
 
 