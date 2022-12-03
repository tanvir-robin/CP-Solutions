#include<bits/stdc++.h>
// #include <boost/math/common_factor.hpp>
using namespace std;
 
typedef long long  ll;
 
 
unsigned long fact(unsigned long int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return(n * fact(n - 1));
    }
}
 
 
int main()
{
     ll a,b;
     cin>>a>>b;
     cout<<fact(min(a,b));
 
}