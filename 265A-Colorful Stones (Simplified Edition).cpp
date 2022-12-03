#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i=0,j=0;
    char s[55],t[55];
    cin>>s>>t;
    int n=strlen(t);
    while(n--)
    {
        if(s[i]==t[j])
            i++;
        j++;
    }
    cout<<i+1;
 
}