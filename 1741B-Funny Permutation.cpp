#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll tst,n,i,sz=0;
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        if(n%2==0)
        {
            for(i=n; i>=1; i--)
                cout<<i<<" ";
            cout<<endl;
        }
        else if(n==3)
            cout<<"-1"<<endl;
        else
        {
            sz=n/2;
            while(sz--)
            {
                cout<<n<<" ";
                n--;
            }
            for(i=1; i<=n; i++)
                cout<<i<<" ";
            cout<<endl;
        }
    }
 
 
 
}
 