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
 
int main()
{
    ll n,m,l,r,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    bool flag=false;
    string s,s1,s2,s3;
 
    cin>>t;
 
    while(t--)
    {    ll a1,b1;
        cin>>l>>r>>x;
        cin>>a1>>b1;
 
         if(a1==b1) cout<<0<<endl;
        else if(a1<l || b1>r) cout<<-1<<endl;
        else if(a1<b1) {
            if(a1+x<=b1) cout<<1<<endl;
        else if(b1+x<=r || a1-x>=l) cout<<2<<endl;
        else if(b1-l>=x && a1+x<=r) cout<<3<<endl;
        else cout<<-1<<endl;
 
        }
        else if(a1-x==b1 || a1-x>b1) cout<<1<<endl;
        else if(b1-x>=l || a1+x<=r) cout<<2<<endl;
        else if(r-b1>=x && a1-x>=l) cout<<3<<endl;
        else cout<<-1<<endl;
 
    }
 
    //cout<<endl; main();
}
 
 