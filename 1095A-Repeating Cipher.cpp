#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int i,j,k,n; cin>>n;
    char ch[n+20];
 
    for(i=0; i<=n; ++i)
       scanf("%c",&ch[i]);
 
 
  //  for(i=1; i<=n; i++)
     //  printf("%d - %c\n",i,ch[i]);
    int it=1;
    for(i=1; i<=n;i++)
    {
          for(j=1; j<i; j++)
            it++;
 
            if(it>n)
                break;
          cout<<ch[it];
    }
 
 
}