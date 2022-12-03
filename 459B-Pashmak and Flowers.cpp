#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(x,y) for(i=x; i<y; i++)
#define fl2(x,y) for(j=x; j<y; j++)
#define fl3(x,y) for(k=x; k<y; k++)
#define nl cout<<endl
#define vsort(v) sort(v.begin(), v.end());
#define vsortg(v) sort(v.begin(), v.end(), greater<int>());
#define all(x) x.begin(),x.end()
#define pb push_back
//--------------------------------------------------------------
 
 
 
ll findNcR(int n, int r)
{   long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;
            n--; r--;
        }
    }
 
    else
        p = 1;
    return p;
}
 
 
 
 
 
int main()
{
    ll n,m,t,i,j,k,x,y,z,cnt=0,ans=0;
    bool flag=false;
    string s1,s2,s3;
 
    cin>>n;
    vector<ll> v;
    while(n--) {
        cin>>k; v.pb(k);
    }
 
    vsortg(v);
    i=*min_element(all(v));
    j=*max_element(all(v));
    x=count(all(v),i);
    y=count(all(v),j);
 
     if(i!=j) z=x*y;
     else {
        z=findNcR(x,2);
     }
    cout<<j-i<<" "<<z;
  //cout<<endl; main();
}
 