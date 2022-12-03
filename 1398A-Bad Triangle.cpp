#include<iostream>
using namespace std;
 
int main()
{
    int t,i,j,k,l;
    cin>>t;
    int n[t];
 
    for(i=0;i<t;i++)
    {
        cin>>n[i];
        int arr[n[i]];
        for(j=0;j<n[i];j++)
            cin>>arr[j];
 
 
       int add=arr[0]+arr[1];
 
       for(j=2;j<n[i];j++)
       {
           if(arr[j]>=add)
           {
               cout<<1<<" "<<2<<" "<<j+1<<endl;
               break;
           }
           if(j==n[i]-1)
            cout<<-1<<endl;
       }
    }
}