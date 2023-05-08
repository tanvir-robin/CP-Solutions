#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y)              for(int i=x; i<y; i++)
#define flc(i,x,y,z)           for(int i=x; i<y; i+=z)
#define nl                     cout<<endl
#define vsort(v)               sort(v.begin(), v.end());
#define vsortg(v)              sort(v.begin(), v.end(), greater<int>());
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
    vector<ll> v;
    vector<ll> v1;
    cin>>n>>m;
    while (m--)
    {
       cin>>x;
       v.pb(x);
       v1.pb(x);
    }
    
    //for min
    ll mn=0;
    fl(i,0,n) {
        sort(all(v));
        fl(j,0,v.size()) {
            if(v[j]>0)  {
                mn+=v[j]; v[j]--; break;
            }
            
            
        }
    }
    //for max
    ll mx=0;
    fl(i,0,n) {
       sort(all(v1),greater<ll>());
        fl(j,0,v.size()) {
            if(v1[j]>0)  {
                mx+=v1[j]; v1[j]--; break;
            }
            
        }
    }
    cout<<mx<<" "<<mn;
   
   
     
 
  //cout<<endl; main();
}
 
 