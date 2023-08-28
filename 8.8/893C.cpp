/*BISMILLAH*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
#define endl '\n'
#define mem(dp, x) memset(dp, x, sizeof dp)

void solve()
{
    int n, i, k;
    cin >> n;
    map<int, int> dic;
    int mx = INT_MIN;

    for (i = 0; i < (n * (n - 1) / 2); i++)
    {
        int x;
        cin >> x;
        dic[x]++;
        mx = max(mx, x);
    }

    int rem = n - 1;
    for (auto it : dic)
    {
        int x = it.second;
        while (x != 0)
        {
            cout << it.first << ' ';
            x -= rem;
            rem--;
        }
    }
    cout << mx << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
}