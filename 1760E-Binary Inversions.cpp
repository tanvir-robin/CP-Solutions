#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y) for(i=x; i<y; i++)
#define flc(i,x,y,z) for(i=x; i<y; i+=z)
#define nl cout<<endl
#define vsort(v) sort(v.begin(), v.end());
#define vsortg(v) sort(v.begin(), v.end(), greater<int>());
#define all(x) x.begin(),x.end()
#define pb push_back
//--------------------------------------------------------------
 
 
ll counter(vector<ll> v)
{
    ll i,j;
    ll ans=0;
    fl(i,0,v.size())
    {
        if(v[i]==1)
        {
            fl(j,i+1,v.size())
            {
                if(v[j]==0) ans++;
            }
        }
    }
    //cout<<"Returning "<<ans<<endl;
    return ans;
 
 
}
 
int main()
{
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    bool flag=false;
    string s,s1,s2,s3;
 
    cin>>t;
 
    while(t--)
    { vector<ll> v;
        cin>>n;
 
        ll cnt1=0,cnt0=0; ans=0;
        while(n--)
        {
            cin>>c;
            if(c) cnt1++;
            else cnt0++;
            v.pb(c);
        }
        // fl(i,0,v.size()) cout<<v[i]<<" "; nl;
 
 
        ll nt=cnt0;ll find1=0, find0=0;
        fl(i,0,v.size())
        {
           if(v[i]==1) ans+=nt;
           else nt--;
        }
 
 
 
        fl(i,0,v.size())
        {
            if(v[i]==0) break;
            else find1++;
 
        }
 
        for(i=v.size()-1; i>=0; i--)
        {
            if(v[i]==1) break;
            else find0++;
 
        }
 
        ll ans_v2=ans+cnt0-1-find1;
 
        ll ans_v3=ans+(cnt1-1)-find0;
 
        cout<<max(ans,max(ans_v2,ans_v3))<<endl;
 
 
 
    }
 
 
}
 
 