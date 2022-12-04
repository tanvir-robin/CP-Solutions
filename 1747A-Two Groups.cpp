#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k,m,mx=0,ind=1, c=0, d=0, e=0;
    cin>>t;
    while(t--) {
            c=0;
        cin>>n;
        while(n--) {
            cin>>k;
            c+=k;
        }
        cout<<abs(c)<<endl;
    }
 
    // cout<<endl; main();
}
 