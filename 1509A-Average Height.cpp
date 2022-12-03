#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k;
    cin>>t;
    while(t--) {
        cin>>n;
        vector<ll> even,odd;
        while(n--) {
            cin>>k;
            if(k%2) odd.push_back(k);
            else even.push_back(k);
        }
 
        for(i=0; i<odd.size(); i++) cout<<odd[i]<<" ";
        for(i=0; i<even.size(); i++) cout<<even[i]<<" ";
        cout<<endl;
    }
 
 
  //cout<<endl; main();
}
 