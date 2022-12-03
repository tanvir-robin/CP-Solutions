#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
     int t,i,j;
     string s;
     cin>>t;
     while(t--)
     {   int n1=0,n0=0;
         cin>>s;
         for(i=0; i<s.size(); i++)
         {   // cout<<"digit: "<<s[i]<<endl;
             if(s[i]=='1')
                n1++;
             else n0++;
         }
         if(n1>n0)
            cout<<n0<<endl;
         else if(n1==n0 && s.size()>2)
            cout<<n1-1<<endl;
            else if(n1==n0)
                cout<<0<<endl;
         else cout<<n1<<endl;
     }
 
}