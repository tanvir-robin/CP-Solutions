#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int t,n,a,b;
   cin>>t;
   while(t--)
   {
       cin>>a>>b;
       if(b/2>=a)
       {
           if(b%2==0)
            cout<<b-(b/2)-1<<endl;
           else
           {
               cout<<b-((b/2)+1)<<endl;
           }
       }
       else cout<<b-a<<endl;
 
   }
}