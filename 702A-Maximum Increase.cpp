#include<bits/stdc++.h>
// #include <boost/math/common_factor.hpp>
using namespace std;
 
typedef long long  ll;
 
 
 
int main()
{
    ll n,k;
    cin>>n;
    ll flag=1;
    vector<ll> v;
    vector<ll> v1;
    while(n--)
    {
        cin>>k;
        v.push_back(k);
    }
 
    for(int i=1; i<v.size(); i++)
    {
        if(v[i]>v[i-1])
        {
            //  cout<<"Increased for: "<<v[i]<<">"<<v[i-1]<<endl;
            flag++;
        }
        else
        {
            //     cout<<"Flag entered: "<<flag<<endl;
            v1.push_back(flag);
            flag=1;
        }
    }
    v1.push_back(flag);
//    int* pMax = max_element(cloud, cloud + countof(cloud));
    int maxi=*max_element(v1.begin(), v1.end());
    cout<<maxi;
 
 
}