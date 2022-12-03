#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k;
    ll zero=0, one=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0; i<s.size(); i++) {
        if(s[i]=='1') one++;
        else zero++;
    }
 
     cout<<n-(2*min(zero,one));
 
  //cout<<endl; main();
}
 