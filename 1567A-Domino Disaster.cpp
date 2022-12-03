#include<iostream>
#include<string.h>
using namespace std;
 
 
 
 
 
int main()
{
    int t,i,j,k;
    cin>>t;
    int n[t];
    char ch[t][105];
 
    for(i=0;i<t;i++)
    {
        cin>>n[i];
        cin>>ch[i];
    }
     for(i=0;i<t;i++)
     {
         for(j=0;j<n[i];j++)
         {
             if(ch[i][j]=='U')
                ch[i][j]='D';
             else if(ch[i][j]=='D')
                ch[i][j]='U';
         }
     }
 
      for(i=0;i<t;i++)
      {
          cout<<ch[i]<<endl;
      }
}