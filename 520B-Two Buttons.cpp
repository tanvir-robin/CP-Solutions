#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll solver(ll n, ll m)
{
    if(m<=n)
        return n-m;
    else if(m%2==0)
           return 1+solver(n,m/2);
    else return 1+solver(n,(m+1));
}
 
 
int main()
{
    ll n,t,i,j,k,tmp1=0,tmp2=0,ans=0,cn,m,ans1,cnter;
    cin>>n>>m;
 
 
    {
        cout<<solver(n,m);
 
    }
 
//    cout<<endl;
//    main();
 
}
 