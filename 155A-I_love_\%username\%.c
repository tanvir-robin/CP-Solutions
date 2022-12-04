#include<stdio.h>
 
int main()
{
 int n,i,j,big,low, count=1;;
 scanf("%d", &n);
 int p[n+10];
 
 for(i=1; i<=n; i++)
    scanf("%d", &p[i]);
 
 if(n>1)
 
  {
 
 if(p[1]>p[2])
    {
        big = p[1];
       low = p[2];
    }
 else if(p[1]<p[2])
    {
     big = p[2];
     low = p[1];
    }
    else
    {
        count=0;
         big = p[2];
     low = p[1];
    }
 
 
 
    for(i=3; i<=n; i++)
    {
        if(p[i]>big)
        {
            count++;
            big = p[i];
 
        }
        else if(p[i]<low)
        {
            count++;
            low = p[i];
        }
    }
   printf("%d",count);
  }
  else
    printf("0");
}