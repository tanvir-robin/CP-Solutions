#include <iostream>
using namespace std;
 
 
int main()
{
    int t,i,j,k;
    cin>>t;
    for(k=0;k<t;k++)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
 
       for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(a[i]<a[j])
            {
                int dif=a[i]+a[j];
                a[i]=dif-a[i];
                a[j]=dif-a[j];
            }
        }
    }
 
 
    if(a[1]+a[2]==a[0])
        cout<<"YES"<<endl;
    else if(a[0]==a[1])
    {
        if(a[2]%2==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(a[1]==a[2])
    {
        if(a[0]%2==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(a[0]==a[2])
    {
        if(a[1]%2==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
 
 
 
 
 
    }
}