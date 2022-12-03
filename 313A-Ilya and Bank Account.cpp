#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k;
    string s;
    cin>>s;
    if(s[0]!='-')
        cout<<s;
    else
    {
        n=s.size();
        n--;
        i=s[n]-'0';
        j=s[n-1]-'0';
        if(s.size()==3 && min(i,j)==0)
            k=1;
        else k=0;
        for(k; k<s.size()-2; ++k)
            printf("%c",s[k]);
        cout<<min(i,j);
    }
 
//    cout<<endl; main();
}
 