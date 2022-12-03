#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    vector <long long> a(n);
    for (long long i = 0; i < n; ++i)
    {
        cin >> a[i];
        long double s = sqrt(a[i]);
        if (s - floor(sqrt(a[i])) == 0)
        {
            bool flag = 1;
            if (a[i] == 1) flag = 0;
            else if (a[i] == 4) flag = 1;
            else if (a[i] % 2 == 0) flag = 0 ;
            else {
                for (long long j = 3; j*j <= sqrt(a[i]); j += 2)
                {
                    if (a[i] % j == 0)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            if (flag) cout << "YES\n";
            else cout << "NO\n";
        } else cout << "NO\n";
    }
}