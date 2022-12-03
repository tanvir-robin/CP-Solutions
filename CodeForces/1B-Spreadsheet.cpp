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
#define ff first
#define ss second
#define DouraMama {ios::sync_with_stdio(false); cin.tie(NULL);}
//--------------------------------------------------------------
 
ll typeFinder(string s)
{
    ll i, cnt=0;
    fl(i,0,s.size()-1) {
       if(s[i]>='A' && s[i]<='Z' && s[i+1]>='0' && s[i+1]<='9') cnt++;
       if(cnt==2) break;
    }
    if(cnt==1) return 1;
    else return 2;
}
 
ll charfinder(char ch) {
   ll ans=(int)(ch);
   return ans-64;
 
}
 
 
 
int main()
{
    DouraMama
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    bool flag=false;
    string s,s1,s2,s3;
 
    cin>>t;
 
    while(t--)
    {
        cin>>s;
        ll marker=0;
        ans=0;
 
 
        if(typeFinder(s)==1)
        {
            fl(i,1,s.size())
            {
                if(s[i]>='0' && s[i]<='9')
                {
                    marker=i;
                    break;
                }
            }
 
            s1=s.substr(0,marker);
 
            ll powr=0;
            for(j=s1.size()-1; j>=0; j--) {
              ans+=charfinder(s[j])*pow(26,powr);powr++;
            }
            cout<<'R'<<s.substr(marker)<<'C'<<ans<<endl;
 
        }
        else {
                ll reminder;
            int indexC=s.find('C');
             int indexR=s.find('R');
             s2=s.substr(1,indexC-1);
            s1=s.substr(indexC+1); //cout<<s1; nl;
            strTOint(s1,ans) //cout<<ans<<endl;
            string ans1;
            while(ans>0) {
                reminder=ans%26;
                if(reminder==0) { ans1+='Z'; ans--;}
                else
                ans1+=(char)(reminder+64);
               // cout<<(char)(reminder+64)<<endl;
                ans/=26;
            }
            reverse(all(ans1));
            cout<<ans1<<s2<<endl;
        }
 
 
 
    }
 
    //cout<<endl; main();
}
 
 