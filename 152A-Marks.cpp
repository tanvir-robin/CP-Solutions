#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y)              for(int i=x; i<y; i++)
#define flc(i,x,y,z)           for(int i=x; i<y; i+=z)
#define nl                     cout<<endl
#define vsort(v)               sort(v.begin(), v.end());
#define vsortg(v)              sort(v.begin(), v.end(), greater<pair<long long,long long>>());
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
    int arr[110];
    memset(arr,0,sizeof(arr));
    cin>>n>>m;
    string ss[n];
    fl(i,0,n)
    {
       cin>>ss[i];
      
    }
    vector<pair<char,ll>> ind[m];
    fl(i,0,m) {
      char mx='0';  
        fl(j,0,n) {
           ind[i].pb(make_pair(ss[j][i],j));
        }
    }
 
    fl(i,0,m) {
        vsortg(ind[i]);
        arr[ind[i][0].ss]=1;
        fl(j,1,n) {
            if(ind[i][j].ff==ind[i][0].ff) {
                 arr[ind[i][j].ss]=1;
            }
            else break;
        }
        
 
    }
 
    fl(i,0,110) {
        if(arr[i]==1) cnt++;
    }
    cout<<cnt;
 
 
 
}
int main()
{   RedCoderErPaDhowaPani
    AladinsLamp();
}
 
 