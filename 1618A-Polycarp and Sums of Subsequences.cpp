#include<iostream>
using namespace std;
int fel=0;
 
void resm(int arr[],int bg)
{
    for(int i=1;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(arr[i]+arr[j]==bg)
            {
                cout<<fel<<" "<<arr[i]<<" "<<arr[j]<<endl;
                break;
            }
        }
    }
}
 
int main()
{
    int t,i,j,k;
    cin>>t;
    int arr[t][7];
 
    //input
    for(i=0;i<t;i++)
    {
        for(j=0;j<7;j++)
            cin>>arr[i][j];
    }
 
    //process
     for(i=0;i<t;i++)
    {
        fel=arr[i][0];
        int bg=arr[i][6]-fel;
 
        resm(arr[i],bg);
    }
}