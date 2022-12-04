#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n,i,j,k;
    char x;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
 
 
        for(i=0; i<s1.size(); i++)
        {
            if(s1[i]=='G' || s1[i]=='B')
                s1[i]='X';
 
            if(s2[i]=='G' || s2[i]=='B')
                s2[i]='X';
        }
 
   //  cout<<s1<<" "<<s2<<endl;
 
        if(s1.compare(s2)==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}