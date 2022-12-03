#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
 
        for(i=2; i<=29; i++)
        {
            k=((pow(2,i)-1));
            if(n%k==0)
            {
                k=n/(pow(2,i)-1);
                cout<<k<<endl;
                break;
            }
 
        }
    }
 
 
    //cout<<endl; main();
}
 