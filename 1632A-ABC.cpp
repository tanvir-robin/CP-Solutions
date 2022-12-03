#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int t,i,j,k,n;
    cin >> t;
    while(t--)
    {
 
        cin >> n;
        string s;
        cin >> s;
        if(n > 2 || s=="11" || s =="00")
            cout << "NO"<<endl;
        else
            cout << "YES"<<endl;
    }
}