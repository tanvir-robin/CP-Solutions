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
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0,res=0;
    bool flag=true;
    string s,s1,s2,s3;
  
 
        cin >> n;
        vector<int> v[100002];
        c=0,x=0;
        fl(i,0,n) 
        {
            cin >> a;
            v[a].push_back(i);
            if (v[a].size() == 1)
            {
                x++;
            }
            if (v[a].size() > 2 && v[a][0] != -1)
            {
                if ((v[a][0]) + (v[a].size() - 1) * (v[a][1] - v[a][0]) != i)
                {
                    v[a][0] = -1;
                    c++;
                }
            }
        }
        cout << x - c << endl;
        for (int i = 0; i < 100002; i++)
        {
            if (v[i].size() == 1)
            {
                cout << i << ' ' << 0 << endl;
            }
            else if (v[i].size() == 2)
            {
                cout << i << ' ' << v[i][1] - v[i][0] << endl;
            }
            else if (v[i].size() > 2)
            {
                if (v[i][0] != -1)
                {
                    cout << i << ' ' << v[i][1] - v[i][0] << endl;
                }
            }
        }
      
  
 
 
}
 
int main()
{   RedCoderErPaDhowaPani
    ll t;
    AladinsLamp();
}
 
 