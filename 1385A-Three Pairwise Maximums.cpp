#include<stdio.h>
 
int main()
{
   int t,i,j,k,a,b,c,big;
   scanf("%d",&t);
   int x[t],y[t],z[t];
   for(i=0;i<t;i++)
    scanf("%d %d %d",&x[i],&y[i],&z[i]);
 
    for(i=0;i<t;i++)
    {  // finding the big one
         big=x[i];
        if(big<y[i])
         big=y[i];
        else if(big<z[i])
            big=z[i];
        // checking if possible
        if((big==x[i] && big==y[i]) || (big==y[i] && big==z[i]) || (big==z[i] && big==x[i]))
        {
            printf("\nYES");
            if(big==x[i] && big==y[i] && big==z[i])
            {
                a=b=c=big;
            }
           else if(big==x[i] && big==y[i])
              {
                  a=big;
                  b=z[i];
                  if(b>1)
                    c=b-1;
                  else
                    c=b;
              }
            else if(big==y[i] && big==z[i])
               {
                   c=big;
                   a=x[i];
                   if(a>1)
                    b=a-1;
                   else b=a;
               }
            else if(big==z[i] && big==x[i])
               {
                   b=big;
                   a=y[i];
                   if(a>1)
                    c=a-1;
                   else c=a;
               }
            printf("\n%d %d %d",a,b,c);
        }
        else printf("\nNO");
    }
}