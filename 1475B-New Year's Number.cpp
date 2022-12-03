#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k;
    cin>>t;
    while(t--) {
        cin>>n;
        if(!(n%2020)) cout<<"YES"<<endl;
        else if(!(n%2021)) cout<<"YES"<<endl;
        else {
            k=n/2020;
            j=n%2020;
            if(j<=k) cout<<"YES"<<endl; else cout<<"NO"<<endl;
        }
    }
 
 
 
  //cout<<endl; main();
}
 