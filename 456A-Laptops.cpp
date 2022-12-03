#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    
    int n,i,j,k;
    map<int, int> m;
    bool flag=1;
    cin>>n;
    while(n--) {
       cin>>i>>j;
       m[j]=i;
    
    }
    int p=0;
    for(auto x:m) {
       if(p<x.second) p=x.second;
       else {flag=0; break;}
    }
    
    if(flag) cout<<"Poor Alex";
    else cout<<"Happy Alex";
}