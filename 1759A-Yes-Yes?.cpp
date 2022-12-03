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
    ll n,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    bool flag=false;
    string s,s1,s2,s3;
    map<char,char> m;
    m['Y']='e';
    m['e']='s';
    m['s']='Y';
 
    cin>>t;
 
    while(t--) {
         flag=true;
        cin>>s;
        if(s.size()==1) {
            if(s[0]=='Y' || s[0]=='e' || s[0]=='s') flag=true;
            else flag=false;
        }
        else {
            fl(i,0,s.size()-1) {
           if(m[s[i]]!=s[i+1]) {
            flag=false; break;
           }
        }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
 
    }
 
  //cout<<endl; main();
}
 
 
 