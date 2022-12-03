#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{
    int t,i,j,k;
    cin>>t;
    int arr[t][4];
    
    
    for(i=0;i<t;i++)
       {
        for(j=0;j<4;j++)
           cin>>arr[i][j];
    
    
    }
    
    
     for(i=0;i<t;i++)
       {   int max=arr[i][0];
         int count=0;
          for(j=1;j<4;j++)
            {
               if(max<arr[i][j])
                    count++;
            
            }
            cout<<count<<endl;
    
       }
    
}
    