#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
// Definition Section
//--------------------------------------------------------------
#define fl(i, x, y) for (int i = x; i < y; i++)
#define flc(i, x, y, z) for (int i = x; i < y; i += z)
#define nl cout << endl
#define vsort(v) sort(v.begin(), v.end());
#define vsortg(v) sort(v.begin(), v.end(), greater<int>());
#define getIntoVc(v, n)       \
    {                         \
        while (n--)           \
        {                     \
            long long yyy;    \
            cin >> yyy;       \
            v.push_back(yyy); \
        }                     \
    }
#define all(x) x.begin(), x.end()
#define pb push_back
#define printvc(v)                     \
    for (int i = 0; i < v.size(); i++) \
        cout << v[i] << " ";
#define strTOint(s, n)    \
    {                     \
        stringstream sst; \
        sst << s;         \
        sst >> n;         \
    }
#define intTOstr(n, s)    \
    {                     \
        stringstream sst; \
        sst << n;         \
        sst >> s;         \
    }
#define ff first
#define ss second
#define DouraMama                    \
    {                                \
        ios::sync_with_stdio(false); \
        cin.tie(NULL);               \
    }
//--------------------------------------------------------------
 
int main()
{
    DouraMama
        ll n,
        m, t, i, j, k, x, y, z, a, b, c, cnt = 0, ans = 0;
    bool flag = false;
    string s, s1, s2, s3;
 
    {
        cin >> n;
        vector<ll> v;
        ll n1 = 0, n2 = 0;
        ll mini = INT_MAX;
        fl(i, 0, n)
        {
            cin >> k;
            v.pb(k);
            if (i > 0)
            {
                if (abs(v[i - 1] - v[i]) < mini)
                {
                    mini = abs(v[i] - v[i - 1]);
                    n1 = i + 1;
                    n2 = i;
                }
            }
        }
 
       // cout<<"Mini "<<mini<<endl;
       // cout<<"Value "<<abs(v[0] - v[v.size()-1])<<endl;
        if (abs(v[0] - v[v.size()-1]) < mini)
                {  
                    mini = abs(v[0] - v[n-1]);
                    n1 = 1;
                    n2 = n;
                }
 
        cout << n1 << " " << n2 << endl;
    }
 
    // cout<<endl; main();
}