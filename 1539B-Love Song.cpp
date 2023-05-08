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
//--------------------------------------------------------------
 
int main()
{   DouraMama
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,q,n1,n2;
    bool flag=false;
    string s,s1,s2,s3;
    vector<ll> v;
    cin>>n>>q>>s;
    vector<ll> prsum;
    ll sum=0;
    fl(i,0,s.size()) {
        sum+=(ll)s[i]-96;
        prsum.pb(sum);
    }
    //printvc(prsum);
    while (q--)
    {  cnt=0;
       cin>>n1>>n2;
       //cout<<"While is ow"<<endl;
       if(n1==1) {
        cnt=prsum[n2-1]; //cout<<"IF encounted"<<endl;
       }
       else cnt=prsum[n2-1]-prsum[n1-2];
 
       cout<<cnt<<endl;
 
    }
    
   
     
 
  //cout<<endl; main();
}
 
 