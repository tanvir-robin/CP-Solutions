#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
 
    long long n,a,b,t;
    cin>>t;
 
    while(t--)
    {
        cin>>n>>a>>b;
        if(a==n && a==b|| (n-(a+b)>1))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
 
    }
}
 