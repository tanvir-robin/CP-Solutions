#include<iostream>
using namespace std;
 
int main()
{
    int t,i,j,k,x;
    cin>>t;
    int n[t];
    int dc[10];
 
    for(i=0;i<t;i++)
        cin>>n[i];
 
    for(i=0;i<t;i++)
    {
        if(99>=n[i])
            cout<<n[i]%10<<endl;
        else
        {   int tmp=n[i];
           x=0;
            while(tmp!=0)
            {
                dc[x]=tmp%10;
                tmp=tmp/10;
                x++;
            }
            int big=dc[0];
        for(k=1;k<x;k++)
        {
            if(dc[k]<big)
                big=dc[k];
        }
        cout<<big<<endl;
        }
 
    }
}