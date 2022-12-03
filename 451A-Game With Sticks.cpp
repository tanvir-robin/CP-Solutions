#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll row,col,i,j,k;
    cin>>row>>col;
    bool win=0;
    ll flag=0;
 
    while(row*col>0)
    {   flag++;
        row--;
        col--;
//        if(row>1 || col>1)
//            win=1;
 
    }
 
    if(flag%2)
        cout<<"Akshat";
    else cout<<"Malvika";
 
   // cout<<endl;main();
}