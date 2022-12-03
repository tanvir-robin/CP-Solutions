#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int life,n,i,k,flag=1;
    cin>>life>>n;
    int arr[n][2];
 
    for(i=0; i<n; ++i)
        cin>>arr[i][0]>>arr[i][1];
 
 
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i][0]>arr[j][0])
            {
                swap(arr[i][0],arr[j][0]);
                swap(arr[i][1],arr[j][1]);
            }
        }
    }
 
 
 
    for(i=0; i<n; ++i)
    {
        if(arr[i][0]<life)
            life+=arr[i][1];
        else
        {
            cout<<"NO";
            flag=0;
            break;
        }
    }
    if(flag)
        cout<<"YES";
 
 
}