#include<iostream>
#include<math.h>
using namespace std;
 
int small(int a,int b,int c)
{   // cout<<"c is "<<c<<endl;
      int small=a;
      if(small>b)
         small=b;
     if(small>c)
          small=c;
        
       // cout<<small<<endl;
         return small;   
   
 
}
 
int main()
{
    int k2,k3,k5,k6,i,j,k;
    cin>>k2>>k3>>k5>>k6;
  //  cout<<"small "<<small(k2,k5,k6)<<endl;
    int sm=small(k2,k5,k6);
    
    k2-=sm;
    k5-=sm;
    k6-=sm;
    
    int sm2= k2>=k3? k3 : k2;
      
    
    cout<<(256*sm)+(32*sm2);
    
}