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
#define printvc(v)             for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
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
    vector<ll> pos;
    vector<ll> neg;
    vector<ll> v;
    cin>>n>>m;
    while(n--) {
        cin>>x;
        if(x<0) {neg.pb(x); cnt++;}
        else pos.pb(x);
 
        v.pb(x);
    }
    vsort(neg);
    vsort(pos);
    vsort(v);
    if(m<=neg.size()) {
        ans = accumulate(neg.begin(), neg.begin()+m,0);
 
        res+=ans*(-1);
        res+=accumulate(neg.begin()+m, neg.end(),0);
        res+=accumulate(all(pos),0);
        cout<<res;
    }
    else if(m>neg.size()) {
       
        ll dif = m - neg.size();
        fl(i,0,v.size()) {
            if(v[i]<0) v[i]*=-1;
            else break;
        } 
        vsort(v);
        if(dif%2) v[0]*=-1;
        res=accumulate(all(v),0);
        cout<<res;
        //cout<<"In";
    }
 
 
 
}
int main()
{   RedCoderErPaDhowaPani
    AladinsLamp();
}
 
 