#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,m,l,i,j,k;
    cin>>n>>m;
    string s1,s2;
 
    map<string, string> name;
   // map<string, string> command;
    while(n--)
    {
        cin>>s1>>s2;
        name[s2]=s1;
    }
 
    while(m--)
    {
        cin>>s1>>s2;
        s2.pop_back();
 
        cout<<s1<<" "<<s2<<"; #"<<name[s2]<<endl;
 
 
    }
 
 
 
//   cout<<endl;
//    main();
}
 