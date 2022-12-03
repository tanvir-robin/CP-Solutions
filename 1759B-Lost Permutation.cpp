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
            flag=true;
            ans=0; ll sum=0;
        cin>>n>>m;
        vector<ll> v;
        while(n--) {
            cin>>k;
            sum+=k;
            v.pb(k);
        }
 
       ans=*max_element(all(v));
       cnt=ans*(ans+1);
       cnt/=2;
       cnt=cnt-sum;
 
              sum=cnt;
             // cout<<"cnt and ans"<<cnt<<" "<<ans<<endl;
 
       while(1) {
 
         if(m==sum) {
            flag=true; break;
         }
         else if(m<sum) {
            flag=false; break;
         }
         else  sum+=++ans;
       }
       if(flag) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
 
    }
 
  //cout<<endl; main();
}
 
 