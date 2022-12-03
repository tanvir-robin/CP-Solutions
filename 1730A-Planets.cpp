#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t,n,p,i,j,k;
    cin>>t;
    while(t--) {
       long long sum=0;
         map<long long, long long> m;
         cin>>n>>p;
        while(n--) {
            cin>>k;
            m[k]++;
        }
        
        
        
        
        for(auto x:m) {
           //  cout<<"In this line x.sxnd= "<<x.second<<" "<<p<<endl;
            if(x.second>=p) sum+=p;
            else sum+=x.second;
        }
       
        cout<<sum<<endl;
    }
}