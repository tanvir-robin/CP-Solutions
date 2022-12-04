#include<stdio.h>
 
int main()
{    int t,i,j,k,l;
     scanf("%d",&t);
     int sk[t][4];
    int p1[t],p2[t],tmp,b1[t],b2[t];
    
    for(i=0;i<t;i++)
       scanf("%d %d %d %d",&sk[i][0],&sk[i][1],&sk[i][2],&sk[i][3]);
    for(i=0;i<t;i++)
    {  
      if(sk[i][0]>=sk[i][1])
       p1[i]=sk[i][0];
    else
      p1[i]=sk[i][1];
    
    
    if(sk[i][2]>=sk[i][3])
       p2[i]=sk[i][2];
    else
      p2[i]=sk[i][3];
  //  printf("\np is %d %d",p1,p2);
    
    }
    
    
    for(i=0;i<t;i++)
    {
      
      for(j=0;j<4;j++)
         {
          for(k=j+1;k<4;k++)
            {
               if(sk[i][j]>sk[i][k])
              {
                tmp=sk[i][j];
             sk[i][j]=sk[i][k];
            sk[i][k]=tmp;
            
            
            }
            
            
            } 
        
       }
    b1[i]=sk[i][2];
    b2[i]=sk[i][3];
    
    
  //  printf("\nb %d %d and p %d %d",b1,b2,p1,p2);
    
    
    if((p1[i]==b1[i] || p1[i]==b2[i]) && (p2[i]==b1[i] || p2[i]==b2[i]))
        printf("\nYES");
        else printf("\nNO");
    
    }
    
    
    
}