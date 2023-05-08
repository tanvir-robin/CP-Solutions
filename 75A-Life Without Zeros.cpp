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
 
string sumOfString(string s1, string s2, bool r) {
    ll n1,n2;
    strTOint(s1,n1);
    strTOint(s2,n2);
    string s;
    intTOstr(n1+n2, s);
    // if(r)
    // s.erase(remove(all(s),'0'), s.end());
    strTOint(s,n1);
  //  cout<<"Returning "<<n1<<endl;
    return s;
}
 
void AladinsLamp() {
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,res=0;
    bool flag=false;
    string s,s1,s2,s3;
    vector<ll> v;
    cin>>s1>>s2;
    s3=sumOfString(s1,s2,false);
    s1.erase(remove(all(s1),'0'), s1.end());
    s2.erase(remove(all(s2),'0'), s2.end());
    s3.erase(remove(all(s3),'0'), s3.end());
    ll n1,n2;
    strTOint(s1,n1);
    strTOint(s2,n2);
    strTOint(s3,ans);
 
    if(n1+n2==ans) cout<<"YES";
    else cout<<"NO";
}
int main()
{   RedCoderErPaDhowaPani
    AladinsLamp();
}
 
 