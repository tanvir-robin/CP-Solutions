#include<iostream>
#include<string.h>
using namespace std;
 
 
 
 
 
int main()
{
    int t,i,j,k;
    char ch[105];
    cin>>ch;
    int ans=0;
    for(i=0;i<strlen(ch);i++)
    {
        for(j=i+1;j<strlen(ch);j++)
        {
            for(k=j+1;k<strlen(ch);k++)
            {
                if(ch[i]=='Q' && ch[j]=='A' && ch[k]=='Q')
                    ans++;
            }
        }
 
    }
    cout<<ans<<endl;
}