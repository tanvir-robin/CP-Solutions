#include<stdio.h>
 
int checker(int x)
{
    if(x%2==0)
        return 2;
    else
        return 1;
}
 
 
 
 
 
 
int main()
{
    int t,i,j,k,evc,oddc,res,counter;
    scanf("%d",&t);
    int arr[t][5000],n[t];
 
    for(i=0;i<t;i++)
    {   scanf("%d",&n[i]);
        for(j=1;j<=n[i];j++)
             scanf("%d",&arr[i][j]);
    }
 
    for(i=0;i<t;i++)
    {  evc=oddc=res=counter=0;
       for(j=1;j<=n[i];j=j+2)
       {
           if(checker(arr[i][j])==2)
                evc++;
           else oddc++;
 
           counter++;
       }
 
 
       if(evc==counter || oddc==counter)
        res++;
       //  printf("\n %d %d %d and res=%d",evc,oddc,counter,res);
    evc=oddc=counter=0;
       for(j=2;j<=n[i];j=j+2)
       {
           if(checker(arr[i][j])==2)
                evc++;
           else oddc++;
 
           counter++;
       }
 
 
 
       if(evc==counter || oddc==counter)
            {
            // printf("\nRes ++");
             res++;
            }
   //  printf("\n %d %d %d and res=%d",evc,oddc,counter,res);
      if(res>=2)
        printf("YES\n");
      else printf("NO\n");
   }
 
}