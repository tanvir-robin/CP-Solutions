#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin>>s;
 
    int n=s.size();
    int up=0;
    for(int i=1; i<n; i++)
    {
        if(isupper(s[i]))
            up++;
    }
 
 //   cout<<"Up:" <<up<<endl;
    if(up==(n-1))
    {
        if(islower(s[0]))
            printf("%c",s[0]-32);
        else  printf("%c",s[0]+32);
        for(int i=1; i<n; i++)
        {
            printf("%c",tolower(s[i]));
        }
 
    }
    else cout<<s;
 
  //  cout<<endl;
   // main();
 
 
 
 
}