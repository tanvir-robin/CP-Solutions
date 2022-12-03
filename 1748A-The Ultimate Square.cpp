#include<bits/stdc++.h>
using namespace std;
 
int main()
{
     long long tst,n;
    cin>>tst;
    while(tst--) {
        cin>>n;
        if(!(n%2))
            cout<<(n/2)<<endl;
        else
           cout<<(n/2)+1<<endl;
    }
}