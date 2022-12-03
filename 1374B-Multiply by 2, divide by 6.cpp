#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k;
    cin>>t;
    while(t--) {
        cin>>n;
        ll f2=0, f3=0;
 
        while(n%3==0) {
            n/=3;
            f3++;
        }
         while(n%2==0) {
            n/=2;
            f2++;
        }
 
        if(n==1 && f2<=f3) cout<<f3+f3-f2<<endl;
        else cout<<-1<<endl;
    }
 
 
 
  //cout<<endl; main();
}
 