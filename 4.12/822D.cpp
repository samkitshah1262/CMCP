#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long n, k, P;
    cin >> n >> k;
    k--;
    long long L[n];
    for (int i = 0; i < n; i++) cin >> L[i];
    P = L[k];
    L[k] = 0;
    long long ps[n + 1];
    ps[0] = 0;
    for (int i = 1; i <= n; i++) ps[i] = ps[i - 1] + L[i - 1];
    int l = k, r = k + 1;
    vector<pair<long long, long long> > LG, RG;
    for (int i = k - 1; i >= 0; i--) {
        if (ps[i] <= ps[l] || i == 0) {
            long long worst = 0, cur = 0;
            for (int j = l - 1; j >= i; j--) {
                cur += L[j];
                worst = min(worst, cur);
            }
            LG.push_back({cur, -worst});
            l = i;
        }
    }
    for (int i = k + 2; i <= n; i++) {
        if (ps[i] >= ps[r] || i == n) {
            long long worst = 0, cur = 0;
            for (int j = r; j <= i - 1; j++) {
                cur += L[j];
                worst = min(worst, cur);
            }
            RG.push_back({cur, -worst});
            r = i;
        }
    }
    reverse(LG.begin(), LG.end());
    reverse(RG.begin(), RG.end());
    long long curp = P;
    while (true) {
        bool acted = false;
        if (!LG.empty() && curp >= LG.back().second) {
            curp += LG.back().first;
            LG.pop_back();
            acted = true;
        }
        if (!RG.empty() && curp >= RG.back().second) {
            curp += RG.back().first;
            RG.pop_back();
            acted = true;
        }
        if (LG.empty() || RG.empty()) {
            cout << "YES\n";
            return;
        }
        if (!acted) {
            cout << "NO\n";
            return;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}