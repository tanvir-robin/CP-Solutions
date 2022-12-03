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
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,sum;
    bool flag=false;
    string s,s1,s2,s3;

    cin>>t;

    while(t--) {
         sum=0;
        cin>>s;
        set<char> st;
        fl(i,0,s.size()) {
            sum+=(int)s[i];
            sum-=96;
          st.insert(s[i]);
        }

        n=s.size();

        ans=n*(n+1); ans/=2;

           if(st.size()!=n || ans!=sum) cout<<"No"<<endl;
        else {
           n=s.find('a');
           if(n==0)
           s1=s.substr(0,1);
           else s1=s.substr(0,n);
           s2=s.substr(n);
         
           string s11,s22;
//           strcpy(s1,s11);
//           strcpy(s2,s22);
            s11=s1; s22=s2;
           sort(all(s11),greater<char>());
           sort(all(s22));
           if(s1.compare(s11)==0 && s2.compare(s22)==0)
            cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
        }

    }

  //cout<<endl; main();
}


