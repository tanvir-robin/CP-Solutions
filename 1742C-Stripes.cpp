#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k;
    cin>>t;
    while(t--)
    {
        char arr[8][8];
 
        //input
        for(i=0; i<8; i++)
        {
            for(j=0; j<8; j++)
                cin>>arr[i][j];
        }
 
        //process
        int red=0,blue=0,tmp=0;
 
        for(i=0; i<8; i++)
        {
            tmp=0;
            for(j=0; j<8; j++)
            {
                if(arr[i][j]=='R')
                    tmp++;
            }
            red=max(red,tmp);
        }
 
        for(i=0; i<8; i++)
        {
            tmp=0;
            for(j=0; j<8; j++)
            {
                if(arr[j][i]=='B')
                    tmp++;
            }
            blue=max(blue,tmp);
        }
 
        if(red>blue) cout<<"R"<<endl;
        else cout<<"B"<<endl;
 
    }
 
 
 
    //cout<<endl; main();
}