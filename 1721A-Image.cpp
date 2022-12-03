#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k,mn;
    cin>>t;
    while(t--)
    {
        char x;
        set<char> s;
        n=4;
        while(n--)
        {
            scanf("\n%c", &x);
            s.insert(x);
        }
        cout<<s.size()-1<<endl;
    }
 
 
    //cout<<endl; main();
}
 