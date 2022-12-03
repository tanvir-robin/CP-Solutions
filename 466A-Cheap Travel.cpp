#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,m,a,b,i,j,k,ans=0;
    cin>>n>>m>>a>>b;
 
    if(n%m)
    {
        ans+=(n/m)*b;
        ans+=b;
    }
    else ans+=ans+=(n/m)*b;
 
    ll tmp=0;
    tmp+=(n/m)*b;
    tmp+=(n%m)*a;
 
    ans=min(ans,tmp);
 
    ans=min(ans, n*a);
 
 
    cout<<ans;
//  cout<<endl;main();
}