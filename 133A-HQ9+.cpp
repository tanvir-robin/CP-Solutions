#include<bits/stdc++.h>
using namespace std;
 
 
typedef long long ll;
int main()
{
  string s;
  bool flag=true;
  cin>>s;
  for(int i=0; i<s.size(); i++)
  {
      if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
      {
          cout<<"YES";
          flag=false;
          break;
      }
  }
  if(flag)
    cout<<"NO";
 
}