#include<iostream>
#include<string.h>
using namespace std;
 
int checker(int x,int y, int z)
{
    if(x+y>z)
        return 2;
    else return 1;
}
 
int main()
{
    int t,i,j,k;
    cin>>t;
    int a[t],b[t],c[t],d[t];
    int x,y,z;
 
    //input
    for(i=0;i<t;i++)
        cin>>a[i]>>b[i]>>c[i]>>d[i];
 
    for(i=0;i<t; i++)
    {
        x=b[i];
        y=c[i];
        z=c[i];
 
      /*  while(checker(x,y,z)==2)
        {
 
        }
 
 
 
        if(checker(x,y,z)==2)
            cout<<x<<" "<<y<<" "<<z<<endl;
        else
        {
            z=b[i]+1;
 
        }  */
 
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
}