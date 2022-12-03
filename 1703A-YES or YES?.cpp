#include<bits/stdc++.h>
using namespace std;
 
int main()
{
     int t,i,flag=0;
     cin>>t;
     string s;
     while(t--)
     {   flag=0;
         cin>>s;
         if(s[0]=='Y' || s[0]=='y')
            flag++;
         if(s[1]=='E' || s[1]=='e')
            flag++;
         if(s[2]=='S' || s[2]=='s')
            flag++;
 
         if(flag==3)
            cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
     }
}