#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define fl(x,y) for(i=x; i<y; i++)
#define fl2(x,y) for(j=x; j<y; j++)
#define nl cout<<endl
#define vsort(v) sort(v.begin(), v.end());
#define vsortg(v) sort(v.begin(), v.end(), greater<int>());
#define pb push_back
 
 
int main()
{
    ll n,m,t,i,j,k;
    cin>>n>>m;
    ll cnt=0;
    fl(1, n+1) {
      if(m%i==0 && (m/i)<=n)cnt++;
    }
 
    cout<<cnt;
 
  //cout<<endl; main();
}
 