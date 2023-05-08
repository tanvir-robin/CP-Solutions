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
 
int main()
{   DouraMama
    ll n,m,t,i,j,k,x,y,z,a,b,n1,n2,c,cnt=0,ans=0;
    bool flag=false;
    string s,s1,s2,s3;
    cin>>n>>k;
    while(n--) {
        cin>>n1>>n2;
        cnt+=(n2-n1)+1;
 
    }
   
     // cout<<k<<endl;
    if(cnt%k==0) cout<<0;
    else {
        ans=k-(cnt%k); 
       // cout<<"Ans= "<<ans<<endl;
        cout<<(ans);
    }
     
 
  //cout<<endl; main();
}
 
 