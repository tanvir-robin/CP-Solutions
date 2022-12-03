#include<stdio.h>
#include<math.h>
 
int main()
{
    int t,i,j,k,big,cat,dog;
    scanf("%d",&t);
    int a[t],b[t],c[t],x[t],y[t];
    
    for(i=0;i<t;i++)
      scanf("%d %d %d %d %d",&a[i],&b[i],&c[i],&x[i],&y[i]);
    
    
    for(i=0;i<t;i++)
     {   
        k=0;
        cat=a[i]+c[i];
        
        
        if(x[i]<=cat)
           {   k++;
               if(x[i]>a[i])
                 c[i]-=x[i]-a[i];
             
        
           }
        dog=b[i]+c[i];
        if(y[i]<=dog)
           {   k++;
               if(y[i]>b[i])
                 c[i]-=y[i]-b[i];
             
        
           }
        
        if(k==2)
        printf("YES\n");
        else printf("NO\n");
         }
    
}