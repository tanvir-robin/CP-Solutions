#include<iostream>
using namespace std;
 
int main()
{
    long long t,i,j,a,b,k;
    cin>>t;
    while(t--)
    {   long long res=0;
        cin>>a>>b>>k;
 
        if(k%2)
        {
            res= a*((k/2)+1)-b*(k/2);
        }
        else res= a*((k/2))-b*(k/2);
 
        cout<<res<<endl;
    }
}