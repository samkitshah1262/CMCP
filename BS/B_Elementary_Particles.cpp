#include "bits/stdc++.h"
#define int long long
using namespace std;
#ifdef LOCAL
#include "debug.h"
#else
#define db(x...)
#endif
///////////////////////////////////////////
const int nax = 150001;
void solve(int _case){

    int n;
    cin >> n;
    vector<vector<int>> pos(nax);
    for(int i{}, x; i < n; ++i){
        cin >> x;
        pos[x].push_back(i);
    }
    int ans = 0;
    for(int i{}; i < nax; ++i){
        int sz = pos[i].size();
        for(int j{}; j + 1 < sz; ++j){
            ans = max(ans, pos[i][j] + n - pos[i][j + 1]);
        }
    }
    cout << (ans? ans: -1) << '\n';
}
signed main(){  ios_base::sync_with_stdio(0);cin.tie(0);

    int t;
    cin>>t;
    for(int _case{1}; _case <= t; ++_case){
        solve(_case);
        #ifdef LOCAL
            cout << "______________________" << '\n';
        #endif
    }

    return 0;
}
