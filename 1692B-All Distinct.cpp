#include <iostream>
using namespace std;
 
int dup(int arr[],int n)
{
      int i,j,count=0;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            /* If duplicate found then increment count by 1 */
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}
 
 
 
int main()
{
    int t,i,j,k;
    cin>>t;
    int arr[t][55],n[t];
 
    for(i=0;i<t;i++)
    {
        cin>>n[i];
        for(j=0;j<n[i];j++)
            cin>>arr[i][j];
    }
 
     for(i=0;i<t;i++)
     {
         int counter=n[i]-dup(arr[i],n[i]);
 
         int dif=n[i]-counter;
 
         if(dif%2==0)
            cout<<counter<<endl;
         else cout<<counter-1<<endl;
     }
}