#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{
    int t,i,j,k;
    cin>>t;
    int arr[t][100000],n[t];
 
    for(i=0;i<t;i++)
    {
        cin>>n[i];
        for(j=0;j<n[i];j++)
            cin>>arr[i][j];
    }
 
    for(i=0;i<t;i++)
    {     int res=0;
        for(j=0;j<n[i];j++)
        {
            if(arr[i][j]%2!=0)
                {
                res++;
 
                }
 
        }
       // cout<<"ans: "<<res<<endl;
 
        if(res==n[i])
            cout<<0<<endl;
        else
        {  // cout<<"Exte"<<endl;
            int ab = res >= n[i]-res ? n[i]-res : res ;
            cout<<ab<<endl;
    }
 
    }
}