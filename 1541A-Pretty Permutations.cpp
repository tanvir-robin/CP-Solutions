#include<iostream>
#include<string.h>
using namespace std;
 
 
void ev2(int n)
{
    for(int i=1;i<=n-1;i++)
    {
        if(i%2!=0)
            cout<<i+1<<" ";
        else
        {
            if(i==n-1)
                cout<<n<<" ";
            cout<<i-1<<" ";
        }
    }
    cout<<endl;
}
 
void ev(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
            cout<<i+1<<" ";
        else cout<<i-1<<" ";
    }
    cout<<endl;
}
 
int evod(int n)
{
    if(n%2==0)
        return 2;
    else return 3;
}
 
 
 
int main()
{
    int t,i,j,k;
    cin>>t;
    int n[t];
 
    for(i=0;i<t;i++)
    {
        cin>>n[i];
    }
      for(i=0;i<t;i++)
      {
          if(evod(n[i])==2)
          {
              ev(n[i]);
          }
          else ev2(n[i]);
      }
}