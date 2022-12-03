#include<bits/stdc++.h>
using namespace std;
 
int fact(int n);
 
 
int nCr(int n, int r)
 
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
 
int fact(int n)
 
{   if(n==0)
 
        return 1;
 
    int res = 1;
 
    for (int i = 2; i <= n; i++)
 
    res = res * i;
 
    return res;
 
}
 
 
int main()
{
 
 
    int t,i,j,k,n;
    cin>>t;
    while(t--) {
        cin>>n;
        k=10-n;
        while(n--)
            cin>>j;
        cout<<nCr(k,2)*6<<endl;
    }
}