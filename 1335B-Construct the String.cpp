#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(x,y) for(i=x; i<y; i++)
#define fl2(x,y) for(j=x; j<y; j++)
#define fl3(x,y) for(k=x; k<y; k++)
#define flc(x,y,z) for(i=x; i<y; i+=z)
#define nl cout<<endl
#define vsort(v) sort(v.begin(), v.end());
#define vsortg(v) sort(v.begin(), v.end(), greater<int>());
#define all(x) x.begin(),x.end()
#define pb push_back
//--------------------------------------------------------------
 
int main()
{
    ll n,m=96,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    bool flag=false;
    string s1,s2,s3;
 
    cin>>t;
 
    while(t--) {
            cnt=0;
        cin>>n>>a>>b;
       while(1) {
         fl(0,a) {
            printf("%c",m+(i%b)+1); cnt++;
           if(cnt==n) break;
        }
           if(cnt==n) break;
       }
       nl;
    }
 
  //cout<<endl; main();
}
 