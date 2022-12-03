#include<iostream>
using namespace std;
 
int main()
{
    int t,i,j,k;
    cin>>t;
    int a[t],b[t],c[t];
    int x,y,z;
 
 
    for(i=0;i<t;i++)
        cin>>a[i]>>b[i]>>c[i];
 
 
 
    for(i=0;i<t;i++)
    {
int big=a[i];
        if(big<b[i])
            big=b[i];
        if(big<c[i])
            big=c[i];
 
 
       z=c[i];
       y=z+b[i];
       x=y+a[i];
 
 
       cout<<x<<" "<<y<<" "<<z<<endl;
 
    }
 
    }