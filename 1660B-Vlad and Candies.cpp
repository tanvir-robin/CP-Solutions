#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int t,n,i,j;
   cin>>t;
   while(t--)
   {
       cin>>n;
       vector<int> v;
       for(i=0; i<n; i++)
          {
              cin>>j;
              v.push_back(j);
          }
 
          sort(v.begin(),v.end(),greater<int>());
 
           // cout<<*v.begin()<<" "<<*(v.begin()+1);
 
          if(n==1)
          {
              if(*v.begin()==1)
                cout<<"YES"<<endl;
              else
                cout<<"NO"<<endl;
 
 
          }
          else
          {
                if(*v.begin()-*(v.begin()+1)>1)
                cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
          }
 
   }
}