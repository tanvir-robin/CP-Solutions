#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll ix,p,q,n,x,t,k;
    cin>>t;
    while(t--)
    {
        vector<ll> vc;
        cin>>x;
 
        while(x--)
        {
            cin>>k;
            //cout
            vc.push_back(k);
        }
        //Getting minimum
        p=*min_element (vc.begin(), vc.end());
        if(p==vc[0])
            cout<<"Bob"<<endl;
        else
            cout<<"Alice"<<endl;
    }
}
 