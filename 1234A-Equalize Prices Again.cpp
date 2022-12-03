#include<iostream>
using namespace std;
 
int main()
{
    long long t,n,i,j,k;
    cin>>t;
    while(t--)
    {
       cin>>n;
       int arr[n];
       
    for(i=0; i<n; i++)
       cin>>arr[i];
      
    int sum=0;
      for(i=0; i<n; i++)
        sum+=arr[i];
        
        
    int res = sum%n==0? sum/n : (sum/n)+1;
      cout<<res<<endl;
       
    
    }
}