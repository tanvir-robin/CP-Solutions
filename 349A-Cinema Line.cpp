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
 
void AladinsLamp() {
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,res=0;
    bool flag=false;
    string s,s1,s2,s3;
    vector<ll> v;
    cin>>n;
    map<ll,ll> mp;
    while (n--)
    {
       cin>>x;
       if(x==25) mp[25]++;
       else if(x==50) {
           if(!mp[25]) {
            cout<<"NO"; return;
           }
           else {
            mp[25]--;
            mp[50]++;
           }
       }
       else {
          if((mp[50] && mp[25])) {
                 mp[50]--; mp[25]--;
          }
          else if((mp[25]>=3)) mp[25]-=3;
          else {
            cout<<"NO"; return;
          }
       }
    }
    cout<<"YES";
    
 
 
 
}
int main()
{   RedCoderErPaDhowaPani
    AladinsLamp();
}
 
 