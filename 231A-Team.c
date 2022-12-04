int main()
{
    int n,i;
    int o1,o2,o3,count=0;
 
    scanf("%d",&n);
 
   for(i=1; i<=n; i++)
   {
 
      scanf("%d %d %d", &o1 ,&o2 ,&o3);
 
 
      if(o1+o2+o3>=2)
        count=count+1;
 
   }
 
   printf("\n%d",count);
}
 