#include<stdio.h>
#include<string.h>
#include<string.h>
#include<ctype.h>
 
int main()
{
    int i;
    char n1[10000], n2[10000];
 
        scanf("%s", &n1);
        scanf("%s", &n2);
 
 
        for(i=0; i<strlen(n1); i++)
        {
            if(n1[i]==n2[i])
                printf("0");
            else
                printf("1");
        }
 
}