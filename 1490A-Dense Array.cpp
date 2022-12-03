#include<bits/stdc++.h>
using namespace std;
 
 
int chck(int a, int b)
{
    if(max(a,b)<=2*min(a,b))
        return 1;
    else return 0;
}
 
 
 
int counter1(int a, int b)
{
    int bi=max(a,b);
    int s=min(a,b);
 
    int flag=0;
 
    while(bi>s)
    {
        s*=2;
        flag++;
    }
 
 //   cout<<"Returning "<<flag-1<<endl;
    return (flag-1);
}
 
int main()
{
    int i,j,t,l,avg,n,sum=0,counter;
    cin>>t;
    while(t--)
    {   counter=0;
        cin>>n;
 
        int arr[n];
       for(i=0; i<n; i++)
            cin>>arr[i];
 
 
            for(i=0; i<n-1; i++)
            {  // cout<<"Entered loop"<<endl;
                if(chck(arr[i],arr[i+1])==0)
                {
                    counter+=counter1(arr[i],arr[i+1]);
                }
            }
 
            cout<<counter<<endl;
 
    }
 
 
}