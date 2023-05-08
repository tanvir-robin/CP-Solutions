#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y)              for(int i=x; i<y; i++)
#define flc(i,x,y,z)           for(int i=x; i<y; i+=z)
#define nl                     cout<<endl
#define vsort(v)               sort(v.begin(), v.end());
#define vsortg(v)              sort(v.begin(), v.end(), greater<int>());
#define getIntoVc(v,n)         { while(n--) {long long yyy; cin>>yyy; v.push_back(yyy);}}
#define all(x)                 x.begin(),x.end()
#define pb                     push_back
#define printvc(v)             for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
#define strTOint(s,n)          {stringstream sst; sst<<s; sst>>n;}
#define intTOstr(n,s)          {stringstream sst; sst<<n; sst>>s;}
#define ff                     first
#define ss                     second
#define RedCoderErPaDhowaPani  {ios::sync_with_stdio(false); cin.tie(NULL);}
#define prefixSum(v,p)         {long long sum=0; for(int i=0; i<v.size(); i++) {sum+=v[i];p.push_back(sum);}}
//--------------------------------------------------------------
 
void AladinsLamp() {
    ll m,t,i,j,k,x,y,z,b,c,cnt=0,ans=0,res=0;
    bool flag=false;
    string s,s1,s2,s3;
    vector<ll> v;
    int n,a;
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
    vector<int> index[5001];
    scanf("%d", &n);
    for (int i = 1; i <= n * 2; ++i)
    {
        scanf("%d", &a);
        index[a].push_back(i);
    }
 
    bool possible = true;
    for (int i = 1; i < 5001; ++i)
    {
        if (index[i].size() % 2 == 1)
        {
            possible = false;
            break;
        }
    }
 
    if (possible)
    {
        for (int i = 1; i < 5001; ++i)
        {
            for (size_t j = 0; j < index[i].size(); j += 2)
            {
                printf("%d %d\n", index[i][j], index[i][j+1]);
            }
        }
    }
    else
    {
        printf("-1\n");
    }
   
 
 
 
 
}
int main()
{   RedCoderErPaDhowaPani
    AladinsLamp();
}
 
 