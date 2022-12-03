#include <iostream>
using namespace std;
 
int checker(int r,int b,int d)
{
    int ra= r>b? r : b;
    int ba=(r+b)-ra;
 
    int reminder=ra/ba-1;
 
    if(ra%ba!=0)
        reminder++;
 
    if(reminder<=d)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 
 
int main()
{
    int t,i,j,k;
    cin>>t;
 
    for(i=0;i<t;i++)
    {
        int r,b,d;
        cin>>r>>b>>d;
 
 
        if(abs(r-b)<=d)
            cout<<"YES"<<endl;
        else
        {
            if(r==1 || b==1)
                cout<<"NO"<<endl;
            else
            {
                checker(r,b,d);
 
            }
        }
    }
}