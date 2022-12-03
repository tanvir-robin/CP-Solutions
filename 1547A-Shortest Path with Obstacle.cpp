#include<iostream>
using namespace std;
 
int mini(int a,int b)
{
    if(a>b)
        return b;
    else return a;
}
 
int maxi(int a,int b)
{
    if(a>b)
        return a;
    else return b;
}
 
 
 
int proces(int a,int b,int f)
{
    if(mini(a,b)<f && maxi(a,b)>f)
        return 2;
    else return 0;
}
 
int main()
{
    int t,i,j,k;
    cin>>t;
    int Ax[t],Ay[t],Bx[t],By[t],Fx[t],Fy[t];
 
    for(i=0;i<t;i++)
        cin>>Ax[i]>>Ay[i]>>Bx[i]>>By[i]>>Fx[i]>>Fy[i];
 
     for(i=0;i<t;i++)
     {  int res=abs(Ay[i]-By[i])+abs(Ax[i]-Bx[i]);
 
           if(Bx[i]-Ax[i]==0 && Fx[i]==Bx[i])
           {
               res+=proces(Ay[i],By[i],Fy[i]);
           }
           else if(By[i]-Ay[i]==0 && Fy[i]==By[i])
           {
               res+=proces(Ax[i],Bx[i],Fx[i]);
           }
          cout<<res<<endl;
 
 
     }
 
 
}
 