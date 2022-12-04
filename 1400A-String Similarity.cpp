#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k;
    string s;
  cin>>t;
  while(t--)
  {
        cin>>n>>s;
        string x;
        for(int i=0; i<s.size(); i+=2)
            x+=s[i];
 
        cout<<x<<endl;
  }
 
 
 
  //cout<<endl; main();
}
 