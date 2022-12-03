#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l;
   // vector<ll> v;
 
    int n;
    cin>>n;
    int x,tmp=0,flag=0,ans=0;
                           while(n--)
    {
        cin>>x;
        if(x>=tmp)
            {
            flag++;
            ans=max(flag,ans);
            }
        else {
            ans=max(ans,flag);
 
            flag=1;
        }
 
        tmp=x;
      
 
 
    }
    
    cout<<ans;
}