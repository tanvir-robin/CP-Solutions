#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k,mn;
 
 
    cin>>n;
    map<ll,ll> m;
    while(n--)
    {
        cin>>k;
        m[k]++;
    }
        auto pr = std::max_element(m.begin(), m.end(), [](const auto &x, const auto &y)
        {
            return x.second < y.second;
        });
        cout<<pr->second<<endl;
 
 
 
        //cout<<endl; main();
    }
 