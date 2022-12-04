#include<stdio.h>'
#include<string.h>
 
int main()
{
    int n,i, s=0;;
    scanf("%d",&n);
    char x[4];
 
    for(i=1; i<=n; i++)
    {
        scanf("%s", &x);
 
        if((strcmp(x,"++X")==0) || (strcmp(x,"X++")==0))
        {
            s=s+1;
        }
        else if((strcmp(x,"--X")==0) || (strcmp(x,"X--")==0))
        {
            s=s-1;
        }
    }
 
    printf("%d",s);
}