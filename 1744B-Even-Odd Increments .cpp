#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll i,t,n,pqr,q,a,b,res,nl,qs;
    cin>>t;
    while(t--)
    {
        ll sm1=0,sm2=0;
        ll evenCount=0, oddCount=0,res=0;
        cin>>n>>q;
        ll mn=n;
        while(n--)
        {
            cin>>pqr;
            res+=pqr;
            if(pqr%2) oddCount++;
            else evenCount++;
        }
        while(q--)
        {
            cin>>a>>b;
            if(a)
            {
                res+=oddCount*b;
                if(b%2)
                {
                    oddCount=0;
                    evenCount=mn;
                }
 
            }
            else
            {
 
                res+=evenCount*b;
                if(b%2)
                {
                    evenCount=0;
                    oddCount=mn;
                }
 
 
            }
            cout<<res<<endl;
 
        }
 
 
    }
}
 