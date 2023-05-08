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
#define printvc(v)             for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
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
    cin>>n>>m>>k;
    ll arr[n+1][m+1];
    fl(i,1,n+1) {
      fl(j,1,m+1) cin>>arr[i][j]; 
    }
   
    map<ll,ll> row;
    map<ll,ll> col; char ch;
   while(k--) {
      cin>>ch>>x>>y;
      if(ch=='c') {
        ll c1=col[x];
        ll c2=col[y];
        col[x]=c2==0? y : c2; col[y]=c1==0? x : c1;
      }
      else if(ch=='r') {
       ll c1=row[x];
        ll c2=row[y];
        row[x]=c2==0? y : c2; row[y]=c1==0? x : c1;
      }
      else {
        ll r = row[x]==0? x : row[x];
        ll c = col[y]==0? y : col[y];
        cout<<arr[r][c]<<endl;
      }
   }
//    nl;nl;
 
//     fl(i,1,n+1) {
//       fl(j,1,m+1) cout<<arr[i][j]<<" "; 
//       nl;
//     }
 
 
 
 
 
}
int main()
{   RedCoderErPaDhowaPani
    AladinsLamp();
}
 
 