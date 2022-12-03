#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    while(n/10!=0){
        int r=n;
        n=0;
        while(r){
            n+=r%10;
            r/=10;
        }
    }
    cout<<n;
   
}