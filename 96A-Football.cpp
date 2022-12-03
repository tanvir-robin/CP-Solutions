#include<bits/stdc++.h>
using namespace std;
 
 
typedef long long ll;
int main()
{
  ll z=0,o=0;
  string s;
  cin>>s;
 
   for(int i=0; i<s.size(); i++)
   {
       if(s[i]=='0')
       {
           z++;
           if(z==7)
            break;
           o=0;
       }
       else if(s[i]=='1')
       {
           o++;
            if(o==7)
            break;
           z=0;
       }
   }
 
   if(o>=7 || z>=7)
    cout<<"YES";
   else cout<<"NO";
}