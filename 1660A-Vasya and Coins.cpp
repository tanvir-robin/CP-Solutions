#include<iostream>
using namespace std;
 
int main()
{
    int t,i,j,k,flag;
    cin>>t;
    int a[t],b[t];
    
    for(i=0;i<t;i++)
        cin>>a[i]>>b[i];
        
        
     for(i=0;i<t;i++)
    {
      if(a[i]<=0)
           flag=1;
     else if(a[i]>=1)
         {
        flag=a[i]+(b[i]*2)+1;
        
         }   
     
    cout<<flag<<endl;
    
    }
    
}