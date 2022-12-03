#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    long long tst,i,j,k,l;
    string str1,str2;
    cin>>tst;
    while(tst--)
    {
 
        cin>>str1>>str2;
 
 
        int scr1=0,scr2=0;
        if(str1[str1.size()-1]=='S') scr1=1;
        else if(str1[str1.size()-1]=='M') scr1=2;
        else if(str1[str1.size()-1]=='L') scr1=3;
 
 
        if(str2[str2.size()-1]=='S') scr2=1;
        else if(str2[str2.size()-1]=='M') scr2=2;
        else if(str2[str2.size()-1]=='L') scr2=3;
 
 
 
 
        if(scr1==scr2)
        {
            if(scr1==1)
            {
                if(str1.size()==str2.size())
                    cout<<"="<<endl;
                else if(str1.size()>str2.size())
                    cout<<"<"<<endl;
                else cout<<">"<<endl;
            }
            else
            {
                if(str1.size()==str2.size())
                    cout<<"="<<endl;
                else if(str1.size()>str2.size())
                    cout<<">"<<endl;
                else cout<<"<"<<endl;
            }
        }
        else if(scr1>scr2) cout<<">"<<endl;
        else cout<<"<"<<endl;
 
 
 
    }
 
 
 
 
}
 