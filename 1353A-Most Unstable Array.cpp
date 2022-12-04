#include<stdio.h>
 
int main()
{
   long long t,i,j,k,part,rem,ext,res;
   scanf("%lli",&t);
   long long n[t+10],m[t+10];
   for(i=0;i<t;i++)
    scanf("%lli %lli",&n[i],&m[i]);
 
    for(i=0;i<t;i++)
    {    // finding the big one
       if(n[i]<=1)
        res=0;
       else{
        // printf("\nEntered loop");
        if(n[i]%2!=0)
            part=(n[i]-1)/2;
        else part=n[i]/2;
  // printf("\nGot the part=%lli",part);
        rem=m[i]/part;
        ext=m[i]-(rem*part);
     //   printf("\nExt is %lli and rem is %lli",ext,rem);
        if(n[i]%2==0 && n[i]>2)
            res=((rem)*(n[i]))+(ext*2);
        else res=((rem)*(n[i]-1))+(ext*2);
     //   printf("\nrem=%lli n[i]-1=%lli ext=%lli part=%lli",rem,n[i]-1,ext,part);
       }
        printf("\n%lli",res);
    }
}