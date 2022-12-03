#include<bits/stdc++.h>
using namespace std;
 
 
typedef long long ll;
int main()
{
   ll i=0,j,k,flag=0;
   string s;
   cin>>s;
 
   for(i; i<s.size(); i++)
   {
       if(s[i]=='h')
       {
           flag++;
           break;
       }
   }
 
   for(++i; i<s.size(); i++)
   {
       if(s[i]=='e')
       {
           flag++;
           break;
       }
   }
 
   for(++i; i<s.size(); i++)
   {
       if(s[i]=='l')
       {
           flag++;
           break;
       }
   }
 
   for(++i; i<s.size(); i++)
   {
       if(s[i]=='l')
       {
           flag++;
           break;
       }
   }
 
   for(++i; i<s.size(); i++)
   {
       if(s[i]=='o')
       {
           flag++;
           break;
       }
   }
 
 
   if(flag==5)
   cout<<"YES";
   else cout<<"NO";
 
 
 
 
}