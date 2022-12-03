#include<iostream>
using namespace std;
 
int main()
{
    int t,i,j,k;
    cin>>t;
    int arr[t];
 
    for(i=0;i<t;i++)
        cin>>arr[i];
 
 
    for(i=0;i<t;i++)
    {
        int x1,x2,x3,x11;
       if(arr[i]%3==0)
       {
           x1=(arr[i]/3)+1;
           x2=arr[i]/3;
           x3=(arr[i]/3)-1;
       }
       else if(arr[i]%3==2)
       {
           x1=(arr[i]/3);
           x2=arr[i]/3;
           x3=(arr[i]/3);
 
           x1=x1+(arr[i]%3);
           x2++;
           x3--;
       }
       else if(arr[i]==7)
       {
           x1=4;
           x2=2;
           x3=1;
       }
       else
       {
           x1=(arr[i]/3);
           x2=arr[i]/3;
           x3=(arr[i]/3);
 
           x1+=2;
           x2+=1;
           x3-=2;
       }
 
 
 
 
        cout<<x2<<" "<<x1<<" "<<x3<<endl;
 
    }
}