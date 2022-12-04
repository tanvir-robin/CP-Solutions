#include<stdio.h>
#include<string.h>
#include<math.h>
 
 
int main()
{
  int y,w,req;
  scanf("%d %d",&y,&w);
 
  if(y>=w)
    req=6-y+1;
  else
    req=6-w+1;
 
  switch(req)
  {
      case 1: printf("1/6");
      break;
      case 2: printf("1/3");
        break;
      case 3: printf("1/2");
        break;
      case 4: printf("2/3");
        break;
      case 5: printf("5/6");
        break;
      case 6: printf("1/1");
  }
 
 
}