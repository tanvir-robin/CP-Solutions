#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,i,counter=0,n;
    cin>>t;
    char s[55];
    while(t--)
    {
        map<char,int> mp;
        counter=0;
 
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>s[i];
            mp[s[i]]++;
 
        }
 
        for(auto i : mp)
        {
            n=i.second;
               n++;
               counter=counter+n;
        }
 
          cout<<counter<<endl;
 
 
 
    }
}