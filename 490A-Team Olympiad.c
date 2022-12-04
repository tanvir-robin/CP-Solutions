#include<stdio.h>
#include<string.h>
 
int main()
{
    int n,k,i,j,count1=0,count2=0,count3=0;
    scanf("%d",&n);
    int p[n+10],one[n+10],two[n+10],three[n+10];
 
    for(i=1; i<=n; i++)
        scanf("%d",&p[i]);
 
        int t1=1;
 // count 1 and indexing
    for(i=1; i<=n; i++)
    {
       if(p[i]==1)
       {count1++;
         one[t1]=i;
         t1++;
       }
 
    }
 
 
      int t2=1;
 // count 2 and indexing
    for(i=1; i<=n; i++)
    {
       if(p[i]==2)
       {count2++;
         two[t2]=i;
         t2++;
       }
 
    }
 
 
      int t3=1;
 // count 3 and indexing
    for(i=1; i<=n; i++)
    {
       if(p[i]==3)
       {count3++;
         three[t3]=i;
         t3++;
       }
 
    }
 
 
 
   int big;
    if(count1<=count2 && count1<=count3)
        big=count1;
    else if(count2<=count1 && count2<=count3)
       big=count2;
       else
       big=count3;
 
 
        printf("%d",big);
 
 
        for(i=1; i<=big; i++)
        {   printf("\n");
            printf("%d %d %d",one[i],two[i],three[i]);
 
        }
}