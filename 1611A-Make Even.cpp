#include<iostream>
#include<string.h>
using namespace std;
 
 
 
 
 
int main()
{
   long long t,i,j,k,m;
   cin>>t;
   long long n[t];
 
   for(i=0;i<t;i++)
    cin>>n[i];
 
     for(i=0;i<t;i++)
     {
         if(n[i]%2==0)
            cout<<0<<endl;
         else
         {
             int tmp=n[i];
             int x,counter=0;
 
             while(tmp>0)
             {
                x=tmp%10;
                   if(x%2==0)
                    counter++;
                 tmp/=10;
             }
             if(x%2==0)
                cout<<1<<endl;
             else if(counter>0)
                cout<<2<<endl;
             else cout<<-1<<endl;
         }
     }
}