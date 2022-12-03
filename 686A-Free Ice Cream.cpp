#include<iostream>
#include<string.h>
using namespace std;
 
 
 
 
 
int main()
{
    long long n,x,i,j,k;
    cin>>n>>x;
    char pm[n];
    long long qn[n];
    long long dst=0;
    for(i=0;i<n;i++)
        cin>>pm[i]>>qn[i];
 
    for(i=0;i<n;i++)
    {
        if(pm[i]=='+')
            x+=qn[i];
        else
        {
            if(x>=qn[i])
                x-=qn[i];
            else dst++;
        }
    }
    cout<<x<<" "<<dst<<endl;
 
}