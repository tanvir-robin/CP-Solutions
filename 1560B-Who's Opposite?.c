#include<stdio.h>
#include<string.h>
#include<math.h>
 
int main()
{
   int t,i,j,k,res[2];
   scanf("%d",&t);
   int a[t],b[t],c[t];
 
   for(i=0;i<t;i++)
    scanf("%d %d %d",&a[i],&b[i],&c[i]);
 
   for(i=0;i<t;i++)
   {
       k=2*abs(a[i]-b[i]);
       if(k<a[i] || k<b[i] || k<c[i])
        printf("-1\n");
       else
       {
           k=abs(a[i]-b[i]);
           res[0]=c[i]+k;
           res[1]=c[i]-k;
 
           if(res[0]!=a[i] && res[0]!=b[i] && res[0]<=2*k)
            printf("%d\n",res[0]);
           else if(res[1]!=a[i] && res[1]!=b[i] && res[1]<=2*k)
            printf("%d\n",res[1]);
 
 
       }
   }
}