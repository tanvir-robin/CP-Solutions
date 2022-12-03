#include<bits/stdc++.h>
#include<math.h>
using namespace std;
 
 
int main()
{
 
    int t,i,x,n,k,a,b;
    cin>>t;
 
    while(t--)
    {
        scanf("\n%d %d",&n,&k);
 
 
 
 
 
        map<int,int> miniindex;
        map<int,int> maxiindex;
 
int arr[n+1];
 
 
 
 
        for(i=1; i<=n; i++)
        {
            cin>>arr[i];
            //inserting to map
            if(miniindex[arr[i]]==0)
                miniindex[arr[i]]=i;
//b for all time
            maxiindex[arr[i]]=i;
        }
        while(k--)
        {
            cin>>a>>b;
            if(maxiindex[b]!=0 && miniindex[a]!=0 && maxiindex[b]-miniindex[a]>=0)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
 
 
 
 
    }
 
}