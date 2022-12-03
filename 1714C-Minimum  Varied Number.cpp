#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll n,t,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<=9) cout<<n<<endl;
        else if(n==10) cout<<19<<endl;
        else
        {
            int x=9;
            int sum=0;
            vector<ll> v;
            while(1)
            {
                if(sum+x<n)
                {
                    sum+=x;
                 //   cout<<x;
                 v.push_back(x);
                }
                else
                {
                    if(n-sum!=0) v.push_back(n-sum);
                       // cout<<n-sum;
                    break;
                }
                x--;
            }
            for(i=v.size()-1; i>=0; i--) cout<<v[i];
            cout<<endl;
        }
    }
 
 
 
    //cout<<endl; main();
}
 