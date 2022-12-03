#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k,mn;
    cin>>t;
    while(t--) {
            string s;
            map<char, ll> m;
          cin>>n>>mn>>s;
        for(i=0; i<s.size(); i++) {
            if(s[i]=='U') m['U']++;
            else if(s[i]=='D') m['D']++;
            else if(s[i]=='R') m['R']++;
            else m['L']++;
        }
 
        ll nD=0;
        ll nU=0;
        ll nR=0;
        ll nL=0;
 
        if(n>=0) nR=n; else nL=abs(n);
        if(mn>=0) nU=mn; else nD=abs(mn);
 
        if(nD<=m['D'] && nU<=m['U'] && nR<=m['R'] && nL<=m['L']) cout<<"YES"<<endl; else cout<<"NO"<<endl;
 
    }
 
 
  //cout<<endl; main();
}
 