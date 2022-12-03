#include<iostream>
#include<string.h>
using namespace std;
 
int maxi(int arr[])
{
    int sm=arr[0];
    for(int i=1;i<4;i++)
    {
        if(sm>arr[i])
            sm=arr[i];
    }
    return sm;
}
int main()
{
   int d1,d2,d3;
   cin>>d1>>d2>>d3;
   int arr[4];
 
   arr[0]=(d1*2)+(d2*2);
   arr[1]=d1+d3+d2;
   arr[2]=d1+d3+d3+d1;
   arr[3]=d2+d3+d3+d2;
 
   cout<<maxi(arr)<<endl;
  
 
 
}