#include<bits/stdc++.h>
using namespace std;
 
 
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y) for(i=x; i<y; i++)
#define flc(i,x,y,z) for(i=x; i<y; i+=z)
#define nl cout<<endl
#define vsort(v) sort(v.begin(), v.end());
#define vsortg(v) sort(v.begin(), v.end(), greater<int>());
#define all(x) x.begin(),x.end()
#define pb push_back
//--------------------------------------------------------------
 
typedef long long lld;
 
int main()
{
    lld n,k,c,tst;
    cin>>tst;
 
    while(tst--) {
         cin>>n;
        set<lld> st;
        k=n;
        while(k--) {
            cin>>c;
            st.insert(c);
        }
 
        if(st.size()==1) cout<<1<<endl;
        else if(st.size()>2) cout<<n<<endl;
        else cout<<2+(n-2)/2<<endl;
 
    }
 
   //restart
}
 
 