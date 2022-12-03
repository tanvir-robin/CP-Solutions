#include<iostream>
#include<string.h>
using namespace std;
 
int evod(int n)
{
    if(n%2==0)
        return 2;
    else return 3;
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
         if(evod(n[i])==3)
         {
             cout<<2<<" "<<(n[i]-1)<<endl;
         }
         else cout<<2<<" "<<(n[i])/2<<endl;
     }
}