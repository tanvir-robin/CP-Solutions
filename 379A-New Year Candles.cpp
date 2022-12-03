#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    ll a,b,ans=0,addition=0;
    cin>>a>>b;
    while(a>0)
    {
        ans+=a;
      // cout<<"New hour added "<<a<<endl;
         addition+=a%b;
        a=a/b;
      //  cout<<"Newly Restored hour added "<<a<<endl;
 
      //  cout<<"Newly Hand hour added "<<addition<<endl;
 
      if(addition>=b)
      {
          a+=addition/b;
          addition%=b;
      }
    }
 
   // ans+=addition/b;
    cout<<ans;
 
//   cout<<endl;
//    main();
}
 