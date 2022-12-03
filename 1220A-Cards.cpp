#include<iostream>
#include<map>
using namespace std;
 
int main()
{
    map<char, int> m;
    int n;
    char ch;
    cin>>n;
    while(n--)
    {
        cin>>ch;
        m[ch]++;
    }
 
    /* for(auto it: m)
       {
 
       cout<<it.first<<" "<<it.second<<endl;
 
        }  */
 
    int x= min(min(m['o'],m['n']),m['e']);
    int p=x;
    while(x--)
        cout<<"1 ";
 
    m['o']-=p;
    m['n']-=p;
    m['e']-=p;
 
 
    x=min(min(m['z'],m['e']),min(m['r'],m['o']));
    while(x--)
        cout<<"0 ";
 
}