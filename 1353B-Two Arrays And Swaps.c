#include<stdio.h>
#include<string.h>
 
int main()
{
   int t,i,j,l,tmp;
   scanf("%d",&t);
   int n[t+10],k[t+10];
    int a[t+10][31],b[t+10][31],res[t+10];
 
   for(i=1;i<=t;i++)
   {
       //taking inputs first
       {
           scanf("%d %d",&n[i],&k[i]);
 
       for(j=1; j<=n[i];j++)
        scanf("%d",&a[i][j]);
       for(j=1; j<=n[i];j++)
        scanf("%d",&b[i][j]);
       }
 
       // accendings the array
       {
           //a array
           for(j=1; j<=n[i]; j++)
           {
               for(l=j+1; l<=n[i]; l++)
               {
                   if(a[i][j]>a[i][l])
                   {
                       tmp=a[i][j];
                       a[i][j]=a[i][l];
                       a[i][l]=tmp;
                   }
               }
           }
 
           //b array
 
           for(j=1; j<=n[i]; j++)
           {
               for(l=j+1; l<=n[i]; l++)
               {
                   if(b[i][j]>b[i][l])
                   {
                       tmp=b[i][j];
                       b[i][j]=b[i][l];
                       b[i][l]=tmp;
                   }
               }
           }
       }
 
       // sorting done bro!
 
 
    //making moves
       for(l=0; l<k[i];l++)
       {
           if(a[i][l+1]<b[i][n[i]-l])
           a[i][l+1]=b[i][n[i]-l];
       }
 
    //sum of a
     res[i]=0;
      for(j=1; j<=n[i];j++)
      {
          res[i]+= a[i][j];
      }
 
 
   }
 
 
  for(i=1; i<=t; i++)
    printf("\n%d",res[i]);
}