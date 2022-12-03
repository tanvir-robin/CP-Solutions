#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    double dif,tmp;
    ll t,i,j,k,n;
    cin>>t>>n;
    vector<int> v;
    while(t--)
    {
        cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v.end());
 
  /*  if(v[0]==0)
    {
        dif=v[1]/2.00;
      //  cout<<"Init: "<<dif<<endl;
 
 
        for(i=1; i<v.size()-1; ++i)
        {
            tmp=((v[i+1]-v[i])/2.00);
            dif= max(dif, tmp);
 
        }
 
 
 
    }
    else
    {
        dif=v[0];
 
        for(i=0; i<v.size()-1; ++i)
        {
            tmp=((v[i+1]-v[i])/2.00);
            dif= max(dif, tmp);
 
        }
 
    }
 
 
    printf("%lf",dif);  */
 
 
    bool flag1=0,flag2=0;
    ll sz=v.size();
 
    if(v[0]!=0)
       {
            flag1=1;
            tmp=v[0];
            dif=max(dif,tmp);
       }
    if(v[sz-1]!=n)
      {
            flag2=1;
            tmp=n-v[sz-1];
            dif=max(dif,tmp );
      }
 
 
 
        for(i=0; i<v.size()-1; ++i)
        {
            tmp=((v[i+1]-v[i])/2.00);
            dif= max(dif, tmp);
 
        }
        printf("%lf",dif);
 
 
}