#include<bits/stdc++.h>
// #include <boost/math/common_factor.hpp>
using namespace std;
 
typedef long long  ll;
 
 
 
 
int main()
{
    ll t,i,j,k,n;
    string s;
    cin>>t;
    string s1="2020";
    while(t--)
    {
        bool flag=1;
        int cnt=0;
        cin>>n>>s;
 
 
            for (int i = 0; i <= 4; i++)
            {
                if (s.substr(0, i) + s.substr(n - 4 + i, 4 - i) == "2020")
                {
                    cout << "YES" << endl;
                    flag=0;
                    break;
                }
            }
            if(flag)
            cout << "NO" << endl;
        }
 
 
 
    }