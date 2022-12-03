#include<iostream>
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    
  if(k<10)
   {
     for(int i=0; i<n; i++)
        cout<<k;
 
}
else if(k==10 && n>1)
    {
       for(int i=1; i<n; i++)
          cout<<1;
        cout<<0;
    
    }
else cout<<-1;
}