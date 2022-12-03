#include<bits/stdc++.h>
using namespace std;
 
 
typedef long long ll;
int main()
{
    ll n,i,j,k,l;
    cin>>n>>k;
 
    ll ev,od;
    od = n%2 ? (n/2)+1 : n/2;
    ev = n-od;
 
    if(k<=od)
    {
        cout<<k+(k-1);
    }
   else
   {
       k-=od;
       cout<<k+k;
   }
 
 
}