#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,ans=0;
    cin>>n;
    while(n!=0)
    {
        if(n&1) ans++;
        n=n>>1;
    }
    cout<<ans;
}
 