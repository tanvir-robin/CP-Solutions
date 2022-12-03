
//Aurthor:Azrul Amaline

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main(){
    ll t,a,b;
    cin>>a>>b;
    t=7-max(a,b);
    if(t==0)
        cout<<"0/6";
    else if(t==1)
        cout<<"1/6";
    else if(t==2)
        cout<<"1/3";
    else if(t==3)
        cout<<"1/2";
    else if(t==4)
        cout<<"2/3";
    else if(t==5)
        cout<<"5/6";
    else if(t==6)
        cout<<"1/1";

}
