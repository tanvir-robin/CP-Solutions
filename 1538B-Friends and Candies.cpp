#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int i,j,t,l,avg,n,sum=0,counter;
    cin>>t;
    while(t--)
    {
        sum=0;
        counter=0;
        cin>>n;
        {
            j=n;
            vector<int> v;
            while(n--)
            {
                //  cout<<"While(n--) seg n= "<<n<<endl;
                cin>>l;
                sum+=l;
                v.push_back(l);
            }
 
            if(j<=1)
                cout<<0<<endl;
            else
            {
 
                if(sum%j!=0)
                    cout<<-1<<endl;
                else
                {
                    counter=0;
                    avg=sum/j;
 
                    for(i=0; i<v.size(); i++)
                    {
                        if(v[i]>avg)
                            counter++;
                    }
                    cout<<counter<<endl;
                }
 
            }
        }
 
 
 
 
    }
 
}