#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    int n,i,j,k;
    map<string,ll> m;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        m[s]++;
        if(m[s]==1)
            cout<<"OK"<<endl;
        else
        {
            cout<<s<<m[s]-1<<endl;
        }
    }
}