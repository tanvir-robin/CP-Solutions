#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k,mx=0,ind=1, chest=0, bck=0, biceps=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>k;
        if(i%3==0) bck+=k;
        else if(i%3==2) biceps+=k;
        else chest+=k;
    }
 
    if(bck>biceps && bck>chest) cout<<"back";
    else if(biceps>bck && biceps>chest) cout<<"biceps";
    else cout<<"chest";
 
    // cout<<endl; main();
}
 