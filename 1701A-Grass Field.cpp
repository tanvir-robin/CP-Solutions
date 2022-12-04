#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int x;
   int arr[4];
   cin>>x;
   while(x--)
   {
 
        for(int i=0; i<4; i++)
            cin>>arr[i];
 
 
      int sum=arr[0]+arr[1]+arr[2]+arr[3];
//chek
      if(sum==0)
        cout<<0<<endl;
      else if(sum>=1 && sum<=3)
        cout<<1<<endl;
        else cout<<2<<endl;
 
   }
}