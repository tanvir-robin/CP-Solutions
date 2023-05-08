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
#define pb push_back
//--------------------------------------------------------------
 
int main()
{
    ll n,m,t,i,j,k,x,y,z,cnt=0,ans=0;
    bool flag=false;
    string s1,s2,s3;
 
    cin>>k;
 
    vector<ll> v;
    fl(0,12)
    {
        cin>>z;
        v.pb(z);
    }
    if(k==0)
    {
        cout<<0;
        return 0;
    }
    vsortg(v);
 
    fl(0,v.size())
    {
        ans+=v[i];
        cnt++;
        if(ans>=k) {
            flag=true; break;
        }
    }
    if(flag) cout<<cnt;
    else cout<<-1;
 
//    cout<<endl;
//    main();
}
 