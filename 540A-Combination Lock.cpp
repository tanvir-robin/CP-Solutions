#include<iostream>
using namespace std;
 
int main()
{
    int n,i,j,flag=0;
    cin>>n;
    char ac[n+1],lc[n+1];
    cin>>ac>>lc;
    
    int big,small;
    for(i=0;i<n;i++)
    {
       big=ac[i]>lc[i]?ac[i]:lc[i];
       small=ac[i]+lc[i]-big;
    
    
       flag+=big-small>(9-big+small+1)?(9-big+small+1):big-small;
       
     
    
    }
    cout<<flag;
}