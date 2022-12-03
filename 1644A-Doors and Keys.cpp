#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,i,j;
    char maph[10];
    cin>>t;
    while(t--)
    {   int rk=0,gk=0,bk=0,flag=1;
        cin>>maph;
        for(i=0;i<6;i++)
        {
            if(maph[i]=='r')
                rk++;
            else if(maph[i]=='g')
                gk++;
            else if(maph[i]=='b')
                bk++;
            else if(maph[i]=='R')
                {
                    if(rk==0)
                    {
                       flag=0;
                       break;
                    }
                }
            else if(maph[i]=='G')
                {
                    if(gk==0)
                    {
                       flag=0;
                       break;
                    }
                }
            else if(maph[i]=='B')
                {
                    if(bk==0)
                    {
                       flag=0;
                       break;
                    }
                }
        }
        if(flag)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       // cout<< flag>=1 ? "YES" : "NO"<<endl;
    }
 
}