#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=s[s.size()-1]-'0';
    if(x%2) cout<<1;
    else cout<<0;
}