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
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    bool flag=false;
    string s,s1,s2,s3;
 
    cin>>t;
 
    while(t--)
    {
        flag=true;
        cnt=0;
        vector<ll> v;
        cin>>n;
        ll tracker=0;
        while(n--)
        {
            cin>>c;
            if(tracker!=c)
            {
                v.pb(c);
                tracker=c;
            }
        }
       // fl(i,0,v.size()) cout<<v[i]<<endl;
 
        if(v.size()==1) flag=true;
        else {
 
        fl(i,0,v.size())
        {
            if(i==0)
            {
                if(v[i]<v[i+1])
                {
                    cnt++;
                    //cout<<"true for "<<s[i]<<" cnt= "<<cnt<<endl;
                }
            }
            else if(i==v.size()-1)
            {
                if(v[i]<v[i-1])
                {
                    cnt++;
                   // cout<<"true for "<<s[i]<<" cnt= "<<cnt<<endl;
                }
            }
            else
            {
                if(v[i]<v[i-1] && v[i]<v[i+1])
                {
                    cnt++;
                  //  cout<<"true for "<<s[i]<<" cnt= "<<cnt<<endl;
                }
            }
 
            if(cnt>=2)
            {
               // cout<<"Broked out"<<endl;
                flag=false;
                break;
            }
 
 
        }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
 
    }
 
    //cout<<endl; main();
}
 
 