#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k=3;
    cin>>t;
    while(t--) {
      set<ll> s;
      cin>>n;
      i=n;
      while(n--) {
        cin>>j;
        s.insert(j);
      }
      if(i==s.size()) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
 
 
 
  //cout<<endl; main();
}
 