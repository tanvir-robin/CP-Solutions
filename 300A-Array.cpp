#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y)              for(int i=x; i<y; i++)
#define flc(i,x,y,z)           for(int i=x; i<y; i+=z)
#define nl                     cout<<endl
#define vsort(v)               sort(v.begin(), v.end());
#define vsortg(v)              sort(v.begin(), v.end(), greater<int>());
#define getIntoVc(v,n)         { while(n--) {long long yyy; cin>>yyy; v.push_back(yyy);}}
#define all(x)                 x.begin(),x.end()
#define pb                     push_back
#define printvc(v,n)             for(int i=0; i<n; i++) cout<<v[i]<<" ";
#define strTOint(s,n)          {stringstream sst; sst<<s; sst>>n;}
#define intTOstr(n,s)          {stringstream sst; sst<<n; sst>>s;}
#define ff                     first
#define ss                     second
#define RedCoderErPaDhowaPani  {ios::sync_with_stdio(false); cin.tie(NULL);}
#define prefixSum(v,p)         {long long sum=0; for(int i=0; i<v.size(); i++) {sum+=v[i];p.push_back(sum);}}
//--------------------------------------------------------------
 
void AladinsLamp() {
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,res=0;
    bool flag=false;
    string s,s1,s2,s3;
    vector<ll> v;
    cin>>n;
    vector<ll> neg;
    vector<ll> pos;
  while(n--) {
    cin>>x; 
    if(x<0) neg.pb(x);
    else if(x>0) pos.pb(x);
    else cnt++;
  }
    
    if(neg.size()%2 && pos.size()>0) {
       cout<<neg.size()<<" ";
       printvc(neg,neg.size()); nl;
 
       cout<<pos.size()<<" ";
       printvc(pos,pos.size()); nl;
 
       cout<<cnt<<" ";
       fl(i,0,cnt) cout<<0<<" ";
 
    }
    else if(neg.size()%2==0 && pos.size()>0) {
       cout<<neg.size()-1<<" ";
       printvc(neg, neg.size()-1); nl;
 
       cout<<pos.size()<<" ";
       printvc(pos, pos.size()); nl;
 
       cout<<cnt+1<<" ";
       fl(i,0,cnt) cout<<0<<" ";
       cout<<neg[neg.size()-1];
    }
    else if(neg.size()%2==0 && pos.size()==0) {
       cout<<neg.size()-3<<" ";
       printvc(neg, neg.size()-3); nl;
 
       cout<<2<<" "<<neg[neg.size()-2]<<" "<<neg[neg.size()-3];
        nl;
 
       cout<<cnt+1<<" ";
       fl(i,0,cnt) cout<<0<<" ";
       cout<<neg[neg.size()-1];
    }
    else if(neg.size()%2 && pos.size()==0) {
        cout<<neg.size()-2<<" ";
       printvc(neg, neg.size()-2); nl;
 
       cout<<2<<" "<<neg[neg.size()-1]<<" "<<neg[neg.size()-2];
        nl;
 
       cout<<cnt<<" ";
       fl(i,0,cnt) cout<<0<<" ";
      
    }
 
 
 
}
int main()
{   RedCoderErPaDhowaPani
    AladinsLamp();
}
 
 