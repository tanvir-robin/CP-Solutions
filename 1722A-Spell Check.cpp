#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n,i,j,k;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
 
        if(n!=5)
            cout<<"NO"<<endl;
        else
        {
              int flag=0;
              map<char,int> m;
 
              for(i=0; i<s.size(); i++)
              {
                  if(s[i]=='T' || s[i]=='i' || s[i]=='m' || s[i]=='u' || s[i]=='r')
                      m[s[i]]++;
              }
 
              for(auto it : m)
              {
                  if(it.second==1)
                    flag++;
                  else break;
              }
 
              if(flag==5)
                cout<<"YES"<<endl;
              else cout<<"NO"<<endl;
 
 
        }
    }
}