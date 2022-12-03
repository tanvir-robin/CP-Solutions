#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
 
ll reversed(ll n)
{
    ll reversed_number = 0, remainder;
 
 
    while(n != 0)
    {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }
    return reversed_number;
}
 
int main()
{
 
    ll n,a,b,c,t,i,j,k;
    cin>>a>>b;
    cout<<a+reversed(b);
 
 
    //cout<<endl; main();
}