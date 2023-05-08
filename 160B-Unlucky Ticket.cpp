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
    vector<ll> v;
    cin>>n>>s;
    s1=s.substr(0,s.size()/2);
    s2=s.substr(n,s.size()/2);
    sort(all(s1));
    sort(all(s2));
    if(s1[0]>s2[0]) {
        fl(i,1,n) {
            if(!(s1[i]>s2[i])) {
                cout<<"NO"; return;
            }
        }
        cout<<"YES";
    }
    else if(s1[0]<s2[0]){
         fl(i,1,n) {
            if(!(s1[i]<s2[i])) {
                cout<<"NO"; return;
            }
        }
        cout<<"YES";
    }
    else cout<<"NO";
}
 
 
 
int main()
{   RedCoderErPaDhowaPani
    AladinsLamp();
}
 
 