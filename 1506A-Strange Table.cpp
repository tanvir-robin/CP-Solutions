#include<bits/stdc++.h>
// #include <boost/math/common_factor.hpp>
using namespace std;
 
typedef long long  ll;
 
int main()
{
     ll n,m,x,t;
     cin>>t;
 
     while(t--) {
     cin>>n>>m>>x;
     x--;
     ll col=x/n;
     ll row=x%n;
 
     cout<<row*m + col +1<<endl; }
 
}