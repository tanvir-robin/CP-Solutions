#include<bits/stdc++.h>
#include<math.h>
using namespace std;
 
int maxi(vector<int> v)
{
    int max1=0;
    int inde=0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]>max1)
        {
            max1=v[i];
            inde=i;
        }
    }
    return inde;
}
 
 
 
int main()
{
    int n,i,j,k;
    cin>>n;
 
 
    while(n--)
    {
        vector<int> v1;
        vector<int> v2;
        cin>>k;
        for(i=0; i<k; i++)
        {
            cin>>j;
            v1.push_back(j);
        }
        for(i=0; i<k; i++)
        {
            cin>>j;
            v2.push_back(j);
        }
        int v1in,v2in;
        v1in=maxi(v1);
        //    cout<<"v1 max index="<<v1in<<endl;
        v2in=maxi(v2);
        //   cout<<"v2 max index="<<v2in<<endl;
        while(v1[v2in]<v2[v2in])
        {
            swap(v1[v2in],v2[v2in]);
 
            v1in=maxi(v1);
            //    cout<<"v1 max index="<<v1in<<endl;
            v2in=maxi(v2);
            //      cout<<"v2 max index="<<v2in<<endl;
        }
 
        while(v1[v1in]>v2[v1in])
        {
            swap(v1[v1in],v2[v1in]);
 
            v1in=maxi(v1);
            //    cout<<"v1 max index="<<v1in<<endl;
            v2in=maxi(v2);
            //      cout<<"v2 max index="<<v2in<<endl;
        }
        cout<<v1[v1in]*v2[v2in]<<endl;
 
 
 
    //    cout<<"Ans 1"<<v1[v1in]*v2[v2in]<<endl;
 
 
 
 
    }
 
}
 
 
 