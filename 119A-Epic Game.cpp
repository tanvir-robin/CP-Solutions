#include<iostream>
using namespace std;
int gcd(int n1,int n2)
{   int i,gcd;
    for(i=1; i <= n1 && i <= n2; ++i)
    {   // Checks if i is facto
        // r of both integers
        if(n1%i==0 && n2%i==0) gcd = i;
    }
    return gcd;
}
int main()
{
    int a,b,n,j;
    cin>>a>>b>>n;
    
     while(1)
      {// cout<<"GC= "<<gcd(a,n)<<endl;
         n-=gcd(a,n);
       // cout<<"gcdn= "<<n<<endl;
          if(n<0)
            {// cout<<"ex1"<<endl;
              j=1; 
              break;
            }
            else if(n==0)
            { //cout<<"ex1"<<endl;
              j=0; 
              break;
            }
       
    n-=gcd(b,n);
   // cout<<"n1= "<<n<<endl;
          if(n<0)
            {// cout<<"ex0"<<endl;
              j=0; 
              break;
            }
        else if(n==0)
            { //cout<<"ex1"<<endl;
              j=1; 
              break;
            }
    
      }
    cout<<j<<endl;
   // main();
}