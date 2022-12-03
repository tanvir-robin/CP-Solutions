#include<bits/stdc++.h>
using namespace std;
 
 
typedef long long ll;
int main()
{
    ll n,m,k,ans=0;
    cin>>n>>m>>k;
    ll d = n%k ? (n/k)+1 : n/k;
    ll p = m%k ? (m/k)+1 : m/k;
    cout<<d*p;
}