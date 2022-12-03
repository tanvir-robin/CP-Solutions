#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,x,temp;
 
    cin>>n;
    temp=n;
    if(n%4==0||n%7==0||n%47==0||n%744==0)
        cout<<"YES"<<endl;
    else
    {
 
        while(1)
        {
            x=temp%10;
            // printf("x=%d\n",x);
            temp=temp/10;
            if(x==1||x==2||x==3||x==5||x==6||x==8||x==9||x==0)
            {
                printf("NO\n");
            break;
 
            }
            else if(temp==0)
 
            {
 
                
 
                printf("YES\n");
 
                break;
 
            }
 
 
 
        }
 
    }
 
 
 
 
}