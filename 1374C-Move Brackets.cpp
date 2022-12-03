#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k,m,ans=0;
    cin>>t;
    while(t--) { string s;
        cin>>n>>s;
        ll ans=0, net=0;
        for(i=0; i<s.size(); i++) {
            if(s[i]=='(') net++;
            else {
                net--;
                if(0>net) {
                    ans++;
                    net=0;
                }
            }
        }
        cout<<ans<<endl;
    }
 
  //cout<<endl; main();
}
 