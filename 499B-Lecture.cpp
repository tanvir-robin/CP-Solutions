#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define fl(x,y) for(i=x; i<y; i++)
#define fl2(x,y) for(j=x; j<y; j++)
#define nl cout<<endl#define vsort(v) sort(v.begin(), v.end());
#define vsortg(v) sort(v.begin(), v.end(), greater<int>());
#define pb push_back
 
 
int main()
{
    ll n,m,t,i,j,k;
    string s1,s2;
    cin>>n>>m;
    map<string, bool> checker;
    map<string, string> finder;
    while(m--) {
        cin>>s1>>s2;
        if(s1.size()<=s2.size()) checker[s1]=true;
        else checker[s1]=false;
        finder[s1]=s2;
    }
 
    while(n--) {
        cin>>s1;
        if(checker[s1]) cout<<s1<<" ";
        else cout<<finder[s1]<<" ";
    }
 
 
  //cout<<endl; main();
}
 