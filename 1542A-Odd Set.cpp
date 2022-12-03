#include<bits/stdc++.h>
using namespace std;
 
typedef long long  ll;
 
ll evenOdd(ll n)
{
    if(n%2)
        return 1;
    else return 0;
}
 
int main()
{
     ll t,i,j,k,l,n;
     ll even, odd;
     cin>>t;
     while(t--)
     {
         cin>>n;
         n*=2;
even=0;odd=0;
         while(n--)
         {
             cin>>l;
            if(evenOdd(l))
                odd++;
            else even++;
         }
 
        if(even==odd)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
 
     }
 
}