#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int cnt(int n)
{
    int cnt=0;
    while(n>0)
    {   cnt++;
        n=n/10;
    }
    return cnt;
}
int main()
{
    int t,ni;
    cin>>t;
 
    while(t--)
    {
 
        cin>>ni;
        int p=cnt(ni);
        p--;
        int pi=pow(10,p);
 
        cout<<(ni-pi)<<endl;
 
    }
}