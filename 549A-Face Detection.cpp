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
#define prefixSum(v, p)                    \
    {                                      \
        long long sum = 0;                 \
        for (int i = 0; i < v.size(); i++) \
        {                                  \
            sum += v[i];                   \
            p.push_back(sum);              \
        }                                  \
    }
//--------------------------------------------------------------
 
int main()
{
    DouraMama
        ll n,
        m, t, i, j, k, x, y, z, cnt = 0, ans = 0;
    bool flag = false;
    string s, s1, s2, s3;
    vector<ll> v;
    ans = 'f' + 'a' + 'c' + 'e';
    ll f = 0, a = 0, c = 0, e = 0;
    cin >> n >> m;
    char ch[n][m];
    fl(i, 0, n)
    {
        fl(j, 0, m)
        {
            cin >> ch[i][j];
        }
    }
    fl(i, 1, n)
    {
        fl(j, 1, m)
        {
            map<char, bool> mp;
            mp[ch[i][j]] = 1;
            mp[ch[i][j - 1]] = 1;
            mp[ch[i - 1][j]] = 1;
            mp[ch[i - 1][j - 1]] = 1;
 
            if (mp['f'] && mp['a'] && mp['c'] && mp['e'])
                cnt++;
        }
    }
    cout << cnt;
 
    // cout<<endl; main();
}