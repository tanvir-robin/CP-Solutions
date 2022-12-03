#include<iostream>
using namespace std;
 
int main()
{
    int t,i,j,k,x,y,b,s;
    cin>>t;
    
    while(t--)
     {
          cin>>x>>y>>k;
          b=max(x,y);
          s=min(x,y);
        //   cout<<"Min max "<<b<<" "<<s<<endl;
          x=(s-1)+((b-1)*s);
         if(x==k)
            cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
          
     }
}