#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t,i,j,k,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<=30) 
            cout<<"NO"<<endl;
         else if((n-30)==6 || (n-30)==10 || (n-30)==14)   
         {  cout<<"YES"<<endl;
            cout<<"6 10 15 "<<n-31<<endl;
         }
        else
        {
            cout<<"YES"<<endl;
            cout<<"6 10 14 "<<n-30<<endl;
        }
    }
}