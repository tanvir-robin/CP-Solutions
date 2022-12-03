#include<iostream>
using namespace std;
int main()
{
    int t,i,j,k,n;
    cin>>t;
    while(t--)
     {
          cin>>n;
          int arr[n];
          for(i=0;i<n;i++)
            cin>>arr[i];
          int flag=0;
           for(i=0;i<n;i++)
           {
               if(arr[i]==1)
                flag++;
               else if(arr[i]==3)
                flag++;
           }
          cout<<flag<<endl;
     }
}