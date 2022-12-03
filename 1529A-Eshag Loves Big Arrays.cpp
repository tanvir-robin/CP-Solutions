#include<bits/stdc++.h>
#include<math.h>
using namespace std;
 
int main()
{
    int n,i,j,k;
    cin>>n;
 
 
    while(n--)
    {     vector<int> v;
        cin>>k;
        for(i=0; i<k; i++)
           {
               cin>>j;
               v.push_back(j);
           }
 
        sort(v.begin(),v.end());
 
         int x=v[0],flag=1;
 
        for(i=1; i<k; i++)
            {
                if(v[i]==x)
                    flag++;
                else break;
            }
 
            cout<<k-flag<<endl;
 
    }
 
 
}