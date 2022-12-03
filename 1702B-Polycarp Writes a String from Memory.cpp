#include<bits/stdc++.h>
#include<math.h>
using namespace std;
 
int main()
{
    int t,i,x;
    cin>>t;
    string s;
    while(t--)
    {
 
        set<int> ma;
        cin>>s;
        int flag=0;
        for(i=0; i<s.size(); i++)
        {
            x=s[i];
            ma.insert(x);
 
            if(ma.size()>3)
            {
                ma.clear();
                ma.insert(x);
                flag++;
            }
        }
//adding extra
        if(ma.size())
            flag++;
 
 
            
            
            
        cout<<flag<<endl;
 
    }
}