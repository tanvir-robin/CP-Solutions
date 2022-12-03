#include<bits/stdc++.h>
using namespace std;
 
 
int p(char ch, int n)
{
    if(ch=='U')
    {
        if(n==0)
            n=9;
        else n--;
    }
    else
    {
        if(n==9)
            n=0;
        else n++;
    }
    return n;
}
 
 
int main()
{
    int t,i,counter=0,j;
    int wheel;
    cin>>t;
    char s[55];
    while(t--)
    {
       cin>>wheel;
       int finalKey[wheel],moves[wheel];
       string s;
 
       for(i=0; i<wheel; i++)
        cin>>finalKey[i];
    /*    for(i=0; i<wheel; i++)
        cout<<"Final key "<<finalKey[i]<<endl;  */
 
       for(i=0; i<wheel; i++)
       {
           cin>>moves[i];
           cin>>s;
        for(j=0; j<s.size(); j++)
           {
              finalKey[i]= p(s[j],finalKey[i]);
 
 
 
       }
 
 
 
       }
   for(i=0; i<wheel; i++)
   {
        cout<<finalKey[i]<<" ";
   }
   cout<<endl;
    }
}