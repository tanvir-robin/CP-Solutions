#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y)              for(long long i=x; i<y; i++)
#define flc(i,x,y,z)           for(long long i=x; i<y; i+=z)
#define nl                     cout<<'\n'
#define vsort(v)               sort(v.begin(), v.end());
#define vsortg(v)              sort(v.begin(), v.end(), greater<long long>());
#define getIntoVc(v,n)         {long long k=n; while(k--) {long long yyy; cin>>yyy; v.push_back(yyy);}}
#define sumvc(v)               accumulate(v.begin(),v.end(),0LL)
#define all(x)                 x.begin(),x.end()
#define pb                     push_back
#define printvc(v)             for(int i=0; i<v.size(); i++) cout<<v[i]<<"\n";
#define strTOint(s,n)          {stringstream sst; sst<<s; sst>>n;}
#define intTOstr(n,s)          {stringstream sst; sst<<n; sst>>s;}
#define ff                     first
#define ss                     second
#define RedCoderErPaDhowaPani  {ios::sync_with_stdio(false); cin.tie(NULL);}
#define prefixSum(v,p)         {long long sum=0; for(int i=0; i<v.size(); i++) {sum+=v[i];p.push_back(sum);}}
//--------------------------------------------------------------
 
void AladinsLamp() {
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,res=0,sum=0;
    bool flag=false;
    string s,s1,s2,s3;
    vector<ll> v;
    cin>>n;
    map<ll,vector<string>> mp;
    while(n--) {
        cin>>s1>>s2;
        if(s2=="rat") mp[2].pb(s1);
        else if(s2=="woman" || s2=="child") mp[3].pb(s1);
        else if(s2=="man") mp[4].pb(s1);
        else if(s2=="captain") mp[5].pb(s1);
    }
   for(auto xx: mp) {
     printvc(xx.ss);
   }
 
 
}
int main()
{   RedCoderErPaDhowaPani
    AladinsLamp();
}
 
 