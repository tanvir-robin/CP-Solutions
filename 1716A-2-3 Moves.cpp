#include<bits/stdc++.h>
using namespace std;
 
 
int three(int n)
{
    int r;
    r=n/3;
    // cout<<"Determined n/3 = "<<r<<endl;
    if(n%3==2)
      {
            r++;
          //  cout<<"n%3==2 executed and r++, now r = "<<r<<endl;
      }
    else if(n%3==1)
    {   r++;
      //  cout<<"n%3==1 executed and r=r+2, now r = "<<r<<endl;
 
    }
 
    //  cout<<"In three(_ ) Will return r= "<<r<<endl;
    return r;
}
 
 
int two(int n)
{
    int r;
    r=n/2;
 //    cout<<"Determined n/2 = "<<r<<endl;
    if(n%2==1)
    { r+=2;
      //  cout<<"n%2==1 executed and r=r+2, now r = "<<r<<endl;
 
    }
 
   // cout<<"In two(_ ) Will return r= "<<r<<endl;
    return r;
}
 
 
 
int main()
{
   int t,i,j,k,n,ans1,ans2;
   cin>>t;
   while(t--)
   {   ans1=0;
      ans2=0;
       cin>>n;
 
       if(n==1)
         cout<<2<<endl;
       else
       {
           int x = three(n) < two(n) ? three(n) : two(n);
           cout<<x<<endl;
       }
   }
}