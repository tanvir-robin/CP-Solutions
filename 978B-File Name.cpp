#include<iostream>
using namespace std;
 
int main()
{
    int n,i;
    cin>>n;
    char fn[n];
    cin>>fn;
    int counter=0;
    int res=0;
    for(i=0;i<n;i++)
    {
        if(fn[i]=='x')
        {
            counter++;
 
        }
        else {
            if(counter>=3)
            {
                res+=counter-2;
            }
            counter=0;
        }
 
    }
 
    if(counter>=3)
            {
                res+=counter-2;
            }
    cout<<res;
 
   
}