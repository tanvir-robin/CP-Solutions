#include<iostream>
#include<string.h>
using namespace std;
 
int maper(char key[],char str)
{
    for(int i=0;i<strlen(key);i++)
    {
        if(key[i]==str)
        {
            return i+1;
            break;
        }
    }
}
 
int main()
{
    int t,i,j,k;
    cin>>t;
    char key[t][26],str[t][55];
 
    for(i=0;i<t;i++)
      cin>>key[i]>>str[i];
 
 
        for(i=0;i<t;i++)
        {  int tmp=maper(key[i],str[i][0]);
           int res=0;
          // cout<<"Initial "<<res<<endl;
            for(j=1;j<strlen(str[i]);j++)
            {
                res+=abs(tmp-maper(key[i],str[i][j]));
              //  cout<<"Note: "<<res<<endl;
                tmp=maper(key[i],str[i][j]);
            }
            cout<<res<<endl;
        }
 
}