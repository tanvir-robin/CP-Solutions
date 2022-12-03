#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(x,y) for(i=x; i<y; i++)
#define fl2(x,y) for(j=x; j<y; j++)
#define fl3(x,y) for(k=x; k<y; k++)
#define nl cout<<endl
#define vsort(v) sort(v.begin(), v.end());
#define vsortg(v) sort(v.begin(), v.end(), greater<int>());
#define pb push_back
//--------------------------------------------------------------
 
int main()
{
    ll n,m,t,i,j,k,x,y,z,cnt=0,ans=0;
    bool flag=false;
    string s1,s2,s3;
 
    cin>>t;
 
    while(t--) {
        cin>>x>>y>>z;
        i=abs(x-1);
        j=abs(y-z)+abs(z-1);
        if(i<j) cout<<1<<endl;
        else if(i>j) cout<<2<<endl;
        else cout<<3<<endl;
    }
 
  //cout<<endl; main();
}
 