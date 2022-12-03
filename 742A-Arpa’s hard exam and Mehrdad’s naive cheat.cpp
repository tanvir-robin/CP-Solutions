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
#define all(x) x.begin(),x.end()
#define pb push_back
//--------------------------------------------------------------
 
int main()
{
    ll n,m,t,i,j,k,x,y,z,cnt=0,ans=0;
    bool flag=false;
    string s1,s2,s3;
 
    cin>>n;
    if(n==0) cout<<1; 
    else if(n%4==1) cout<<8;
    else if(n%4==2) cout<<4;
    else if(n%4==3) cout<<2;
    else cout<<6;
 
  //cout<<endl; main();
}
 