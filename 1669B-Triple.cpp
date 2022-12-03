#include<bits/stdc++.h>
using namespace std;
 
typedef long long  ll;
 
int main()
{
     ll t,i,j,k,l,n;
     cin>>t;
     while(t--)
     {    map<int,int> m;
     bool flag=1;
         cin>>n;
         while(n--)
         {
             cin>>l;
             m[l]++;
         }
 
         for(auto it:m)
         {
             if(it.second>=3)
             {
                 cout<<it.first<<endl;
                 flag=0;
                 break;
             }
 
         }
         if(flag)
            cout<<"-1"<<endl;
     }
}