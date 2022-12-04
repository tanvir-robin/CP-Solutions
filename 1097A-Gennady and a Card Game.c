#include<stdio.h>
#include<string.h>
int main()
{   int i,j,k=0;
    char hand[5][2];
    char tabl[2];
    scanf("%s",&tabl);
 
    for(i=0;i<5;i++)
        scanf("%s",hand[i]);
 
    for(i=0;i<5;i++)
    { //  printf("\nChecking for %c and %c",tabl[0],hand[i][0]);
        if(tabl[0]==hand[i][0])
          {
              k++;
              break;
          }
 
          if(tabl[1]==hand[i][1])
          {
              k++;
              break;
          }
 
    }
    //     printf("\nK=%d",k);
 
 
    if(k>=1)
        printf("YES");
    else printf("NO");
 
   
 
}