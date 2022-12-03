#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
     int t,i,j,k,n,counter;
     cin>>t;
     while(t--)
     {
         cin>>n;
         map<string,int> m;
         string s[n];
         for(i=0; i<n; ++i)
           {
                           cin>>s[i];
                           m[s[i]]++;
           }
         for(i=0; i<n; ++i)
         {
             counter=0;
 
             for(j=1; j<s[i].size(); j++)
             {
                 string s1=s[i].substr(0,j);
                 string s2=s[i].substr(j,s[i].size()-j);
 
                 if(m[s1] && m[s2])
                 {
                      counter=1;
                      break;
                 }
             }
             cout<<counter;
         }
         cout<<endl;
     }
}