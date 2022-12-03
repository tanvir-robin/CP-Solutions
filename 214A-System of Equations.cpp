#include<iostream>
using namespace std;
 
int eqn(int a,int b,int m)
{
    if(a+(b*b)==m)
        return 1;
    else return 0;
}
 
int main()
{ int counter=0;
    int n,m,i,j,a,b=0;
    cin>>n>>m;
    if(n==1 && m==1)
        counter=2;
  //  cout<<n<<" "<<m;
   else
   {
        i=1;
 
    while(1)
    {
       a=i;
       i++;
       b=n-(a*a);
       if(b<0)
            break;
       else
       {
           if(eqn(a,b,m))
            counter++;
       }
    }
   }
    cout<<counter<<endl;
 
}