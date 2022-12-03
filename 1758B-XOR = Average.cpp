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
//--------------------------------------------------------------
 
int main()
{
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    bool flag=false;
    string s,s1,s2,s3;
 
    cin>>t;
 
    while(t--) {
        cin>>n;
        if(n%2) {
            fl(i,0,n) cout<<30<<" ";
        }
        else if(n==2) cout<<1<<" "<<3;
        else {
             cout<<1<<" "<<2<<" "<<3<<" ";
            fl(i,0,n-3) cout<<2<<" ";
 
        }
        nl;
 
    }
 
  //cout<<endl; main();
}
 
 