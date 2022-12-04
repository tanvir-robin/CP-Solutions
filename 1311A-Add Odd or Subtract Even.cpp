#include<stdio.h>
#include<string.h>
#include<math.h>
 
 
int main()
{
 
int t,i,j,k;
scanf("%d",&t);
int num[t][2],count[t];
 
 
for(i=0;i<t;i++)
    scanf("%d %d",&num[i][0],&num[i][1]);
 
    for(i=0;i<t;i++)
    {  count[i]=0;
        if(num[i][0]<num[i][1])
        {
            if((num[i][1]-num[i][0])%2!=0)
                {
                    printf("\n1");
 
                }
            else
            {
                printf("\n2");
 
            }
        }
        else if(num[i][0]>num[i][1])
        {
            if((num[i][0]-num[i][1])%2!=0)
                {
                    printf("\n2");
 
                }
            else
            {
                printf("\n1");
 
            }
        }
        else
            printf("\n0");
    }
 
 
 
}