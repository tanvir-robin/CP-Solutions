#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    long long n,ind,tst,i,j,k;
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        if(n%2==0)
        {
            ind=(n/2);
 
            cout<<ind<<endl;
            for(i=2, j=(3*n); i<(3*n)/2; i+=3,j-=3)
                cout<<i<<" "<<j<<endl;
        }
        else
        {
            ind=n/2;
            ind++;
            cout<<ind<<endl;
            for(i=2, j=(3*(n-1)); i<(3*(n-1))/2; i+=3,j-=3)
                cout<<i<<" "<<j<<endl;
                cout<<2+((n/2)*3)<<" "<<(n*3)<<endl;
        }
 
 
    }
}
 