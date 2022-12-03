#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,n,i,x;
  
   cin>>t;
   while(t--)
   {   
         map<int,int> m;
       cin>>n;
       for(i=0; i<n; i++)
       {
           cin>>x;
           m[x]++;
       }
         for(auto it : m)
         {
             x=it.second;
             break;
         }
         cout<<n-x<<endl;
   }
}