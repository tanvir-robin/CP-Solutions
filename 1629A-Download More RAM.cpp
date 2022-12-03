#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int i,j,t,k,n;
    cin>>t;
    while(t--)
    {   j=1;
        cin>>n>>k;
        int rram[n];
        int addram[n];
 
        for(i=0; i<n; i++)
            cin>>rram[i];
        for(i=0; i<n; i++)
            cin>>addram[i];
 
         while(j==1)
         {
             j=0;
              for(i=0; i<n; i++)
             {
                 if(rram[i]<=k && rram[i]!=-1)
                 {
                     k+=addram[i];
                     rram[i]=-1;
                     j=1;
                 }
             }
         }
         cout<<k<<endl;
 
    }
}