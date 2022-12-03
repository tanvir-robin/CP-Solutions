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
    char c1,c2;
    cin>>n>>s;
 
    flc(i,0,s.size()-1,1) {
        cnt=0;
 
       fl(j,i+1,s.size()-1) {
          if(s[i]==s[j] && s[i+1]==s[j+1]) cnt++;
       }
     //  cout<<"It's time for "<<s[i]<<s[i+1]<<" and cnt+ "<<cnt; nl;
      if(ans<=cnt) {
        ans=cnt; c1=s[i];c2=s[i+1];
      }
    }
 
    cout<<c1<<c2;
 
  //cout<<endl; main();
}
 