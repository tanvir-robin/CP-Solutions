#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{
    int t,i,j,k,s,e;
    cin>>t;
    char ch[105];
    while(t--)
    {   s=0,e=0;
        cin>>ch;
        k=strlen(ch);
 
        for(i=0; i<k; i++)
        {
            if(ch[i]=='1')
            {
                s=i;
                break;
 
            }
        }
 
        for(i=k-1; 0<=i; i--)
        {
            if(ch[i]=='1')
            {
                e=i;
                break;
 
            }
        }
        
        int flag=0;
        for(i=s; i<e; i++)
         {
           if(ch[i]=='0')
              flag++;
        
        }
      cout<<flag<<endl;
    // cout<<"ans :"<<s+1<<" "<<e+1<<endl;
 
 
    }
}