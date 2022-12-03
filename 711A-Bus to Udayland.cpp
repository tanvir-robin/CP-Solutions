#include<iostream>
using namespace std;
 
 
 
 
int main()
{
    int t,i,j,k;
    cin>>t;
    char arr[t][5];
 
    //input
    for(i=0;i<t;i++)
    {
 
       cin>>arr[i];
    }
     int fel=0;
    //process
     for(i=0;i<t;i++)
    {
       if(arr[i][0]=='O' && arr[i][1]=='O')
       {
           arr[i][0]='+';
           arr[i][1]='+';
           fel++;
           break;
       }
       else if(arr[i][3]=='O' && arr[i][4]=='O')
       {
           arr[i][3]='+';
           arr[i][4]='+';
           fel++;
           break;
       }
    }
 
    //print
    if(fel>0)
    {     cout<<"YES"<<endl;
         for(i=0;i<t;i++)
         {
             for(j=0;j<5;j++)
                cout<<arr[i][j];
             cout<<endl;
         }
    }
    else cout<<"NO"<<endl;
}