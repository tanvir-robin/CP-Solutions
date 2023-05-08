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
    map<ll,ll> mp;
    cin>>n;
    while(n--) {
        cin>>x;
        mp[x]++;
    }
    vector<ll> inc;
    vector<ll> dec;
   flag=true;
    for(auto xx: mp) {
        if(xx.ss>2) {
            cout<<"NO";
            flag=false;
            break;
        }
        else if(xx.ss==2) {
            inc.pb(xx.ff);
            dec.pb(xx.ff);
        }
        else {
            inc.pb(xx.ff);
        }
    }
    if(flag) {
        cout<<"YES"<<endl;
        cout<<inc.size()<<endl;
        printvc(inc); nl;
        cout<<dec.size()<<endl;
        reverse(all(dec));
        printvc(dec); nl;
    }
   
     
 
  //cout<<endl; main();
}
 
 