#include<iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int x,n;
    cin>>x;
   for(int i=0; i<x; i++)
    {
        cin>>n;
        if(n%2)
            cout<<-1<<endl;
        else
            cout<<0<<" "<<0<<" "<<n/2<<endl;
    }
}