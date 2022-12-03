#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{
    int t,i,j,k;
    cin>>t;
    char ch[t][500],fnd[t][10];
 
    for(i=0;i<t;i++)
       {
           cin>>ch[i]>>fnd[i];
       }
 
    for(i=0;i<t;i++)
    {   int tmp=0;
        if(strlen(ch[i])%2==0)
            cout<<"NO"<<endl;
        else
        {
            for(j=0;j<strlen(ch[i]);j++)
        {
            if(ch[i][j]==fnd[i][0])
            {
                tmp=j+1;
           //    cout<<"found "<<tmp<<endl;
                if(tmp%2!=0)
                  break;
            }
 
 
        }
            if((tmp%2!=0 && strlen(ch[i])>1) || (tmp==1 && strlen(ch[i])))
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
 
        }
 
 
    }
}