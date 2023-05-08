#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y) for(int i=x; i<y; i++)
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
 
 
ll solver(string s) {
    ll t1score=0, t2score=0, kik1=5,kik2=5;
    fl(i,0,s.size()) {
        if(i%2) {
             kik1--;
             if(s[i]=='1') t1score++;
             else if(s[i]=='?' && t2score-t1score<=0) t1score++;
 
        }
        else {
            kik2--;
            if(s[i]=='1') t2score++;
            else if(s[i]=='?' && t1score-t2score<=0) t2score++;
 
         }
 
        if(t2score-t1score>kik1 || t1score-t2score>kik2) return i+1; 
    }
    return 10;
}
 
int main()
{   DouraMama
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    bool flag=false;
    string s,s1,s2,s3;
 
    cin>>t;
 
    while(t--) {
        cin>>s;
       s1=s2=s;
       fl(i,0,s.size()) {
        if(s[i]=='?') {
            if(i%2) {
                s1[i]='1';
                s2[i]='0';
            }
            else {
                s2[i]='1';
                s1[i]='0';
            }
        }
       }
        ans=min(solver(s1),solver(s2));
        cout<<ans<<endl;
 
    }
 
  //cout<<endl; main();
}
 
 