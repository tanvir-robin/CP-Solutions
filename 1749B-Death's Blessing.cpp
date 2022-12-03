#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,tmp,t,ax,j;
    cin>>t;
    while(t--)
    {    ll smtn=0;
        cin>>n;
         ax=n;
         while(n--) {
            cin>>tmp;
            smtn+=tmp;
         }
         // ll tmp;
         vector<ll> vc;
         while(ax--)
            {
            cin>>tmp;
            vc.push_back(tmp);
         }
         sort(vc.begin(),vc.end());
         for(int i=0; i<vc.size()-1; i++)
            smtn+=vc[i];
         cout<<smtn<<endl;
    }
 
}
 