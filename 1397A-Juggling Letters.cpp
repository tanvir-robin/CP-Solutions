#include<iostream>
#include<string.h>
using namespace std;
 
 
 
 
int main()
{
    int t,i,j,k;
    cin>>t;
    int n,by[t];
    for(i=0;i<t;i++)
    {
        cin>>n;
        char ch[n][1005];
        for(j=0;j<n;j++)
            cin>>ch[j];
        int chck[30];
        for(j=0;j<30;j++)
            chck[j]=0;
 
        for(j=0;j<n;j++)
        {
            for(k=0;k<strlen(ch[j]);k++)
            {
                int x=ch[j][k]-97;
               //  cout<<ch[j][k]<<"& "<<x<<endl;
                chck[x]+=1;
            }
        }
        int counter=0;
         for(j=0;j<30;j++)
         {   // cout<<j<<"="<<chck[j]<<endl;
             if(chck[j]>=n)
                counter++;
         }
 
      by[i]=0;
         for(j=0;j<26;j++)
         {
             if(chck[j]!=0 && chck[j]%n==0)
             {
                 by[i]++;
             }
             else if(chck[j]!=0 && chck[j]%n!=0)
             {
                 by[i]=0;
                 break;
             }
 
         }
 
 
 
    }
 
    for(i=0;i<t;i++)
    {
        if(by[i]!=0)
            cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }
 
 
}