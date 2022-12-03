#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long t,i,j,k,n,m;
    long long int x;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        if(n%2==m%2 && n>=(m*m)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}