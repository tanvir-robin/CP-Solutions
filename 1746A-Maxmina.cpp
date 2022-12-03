#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n,t,i,j,k,ans,test;
 
    bool tst;
 
    cin>>t;
    while(t--)
    {
 
        tst=false;
        cin>>i>>k;
        vector<long long> vk;
        while(i--)
        {
            cin>>j;
            if(j==1) tst=true;
            vk.push_back(j);
        }
 
        if(tst)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
 
}
 