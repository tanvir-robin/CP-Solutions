#include<iostream>
#include<string.h>
using namespace std;
 
int last(int n)
{
    return n%10;
}
 
 
 
int main()
{
    int t,i,j,k;
    cin>>t;
    int n[t];
 
    for(i=0;i<t;i++)
    {
        cin>>n[i];
    }
 
     for(i=0;i<t;i++)
     {
         if(n[i]%7==0)
            cout<<n[i]<<endl;
         else
         {
             int x=n[i]-last(n[i]);
 
             for(j=0;j<10;j++)
             {
                 if(x%7==0)
                    {
                        cout<<x<<endl;
                        break;
                    }
                  x++;
             }
 
         }
     }
}