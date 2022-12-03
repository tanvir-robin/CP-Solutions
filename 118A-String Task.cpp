#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int i,j;
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  //  cout<<s;
    for(i=0; i<s.size(); i++)
    {
        // cout<<".";
        
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y') 
             continue;
        else cout<<"."<<s[i]; 
    
    
    
    }
}