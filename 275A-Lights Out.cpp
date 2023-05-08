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
    vector<ll> v;
    int arr[3][3];
    int res[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    fl(i,0,3) {
        fl(j,0,3) {
            cin>>arr[i][j];
        }
    }
 
    fl(i,0,3) {
        fl(j,0,3) {
                 res[i][j]+=arr[i][j];
                if(i+1<3)
                res[i][j]+= arr[i+1][j];
                if(i-1>=0)
                 res[i][j]+= arr[i-1][j];
                if(j+1<3)
                 res[i][j]+= arr[i][j+1];
                if(j-1>=0)
                 res[i][j]+= arr[i][j-1];
        } 
    }
 
     fl(i,0,3) {
        fl(j,0,3) {
            // cout<<res[i][j]%2? "0" : "1";
 
            if(res[i][j]%2) cout<<0;
            else cout<<1;
        }
        nl;
         }
   
     
 
  //cout<<endl; main();
}
 
 