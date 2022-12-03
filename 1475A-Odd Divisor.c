#include <stdio.h>
 
int main() {
 long long int t,i,j,count=0;
 scanf("%lld",&t);
  
long long n[t];
 
 
// taking input 
for(i=0;i<t;i=i+1)
  scanf("%lld",&n[i]);
 
 // Processing 
 for(i=0;i<t;i=i+1)
 {  count=0;
    
 
   while(n[i]>1)
   {
 
     if(n[i]%2==0)
        n[i]/=2;
     else 
      { printf("YES\n"); break;}
   }
     
   if(n[i]<=1)
     printf("NO\n");
  
 }
 
 
 return 0;
}