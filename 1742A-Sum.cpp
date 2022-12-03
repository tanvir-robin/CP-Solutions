#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k=3;
    cin>>t;
    while(t--) {
       cin>>i>>j>>k;
       if(i+j==k || i+k==j || j+k==i) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
 
    }
 
 
 
  //cout<<endl; main();
}
 