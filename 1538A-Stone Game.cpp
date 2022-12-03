#include<bits/stdc++.h>
using namespace std;
 
int fmax(vector<int> v)
{
    int maxima=0;
    int index=0;
 
    for(int i=0; i<v.size(); i++)
    {
        if(maxima<v[i])
        {
            maxima=v[i];
            index=i;
        }
    }
 
    return index;
}
 
 
 
int fmini(vector<int> v)
{
    int maxima=v[0];
    int index=0;
    for(int i=1; i<v.size(); i++)
    {
        if(maxima>v[i])
        {
            maxima=v[i];
            index=i;
        }
    }
 
    return index;
}
 
 
int main()
{
    int t,i,j,k,n;
    int i1,i2,c1,c2,c3;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> v;
        for(i=1; i<=n; i++)
            {
                cin>>k;
                v.push_back(k);
            }
 
           i2= max(fmax(v),fmini(v));
           i1= min(fmax(v),fmini(v));
           i1++;
           i2++;
 
           c1=i1+(n-i2)+1;
           c2=n-i1+1;
           c3=i2;
 
           cout<<min(min(c1,c2),c3)<<endl;
 
    }
}