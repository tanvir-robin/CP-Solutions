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
#define printvc(v) for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
#define strTOint(s,n) {stringstream sst; sst<<s; sst>>n;}
#define intTOstr(n,s) {stringstream sst; sst<<n; sst>>s;}
//--------------------------------------------------------------
 
int main()
{
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    bool flag=false;
    string s,s1,s2,s3;
 
    cin>>t;
 
    while(t--)
    {
        cin>>n;
        cin>>s;
        fl(i,0,s.size())
        {
            if(s[i+2]!='0' || (s[i+2]=='0' && s[i+3]=='0'))
            {
                strTOint(s.substr(i,1),k)
                // cout<<"K is "<<k<<endl;
                cout<<(char)(k+96);
            }
            else  if(s[i+2]=='0' && s[i+3]!='0')
            {
                strTOint(s.substr(i,2),k)
                // cout<<"K is "<<k<<endl;
                cout<<(char)(k+96);
                i+=2;
            }
        }
        nl;
    }
 
    //cout<<endl; main();
}
 
 