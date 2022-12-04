int main()
{
    int n,i,k,j, c, count=0;
    scanf("%d %d", &n, &k);
    int s[n];
 
    for(i=1; i<=n; i++)
    {
        scanf("%d", &s[i]);
 
    }
 
 
    for(j=1; j<=n; j++)
    {
       if(s[k]<=s[j] && s[j]>0)
       {
           count=count+1;
       }
 
    }
    printf("%d", count);
}