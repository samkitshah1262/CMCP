#include <functional>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <limits>
#include <math.h>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

#define rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define ms(p, k) memset(p, k, sizeof(p))
#define all(p) (p).begin(), (p).end()
#define sz(p) (p).size()
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define mod (int)1e9+7
#define INF (int)1e9


#define TASKNAME ""
//#define DEBUG

typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <pii> vpii;

int n, m, k, ans = 0, a[6][6];

int main () {
    /*#ifdef DEBUG
       freopen (TASKNAME".in", "r", stdin);
       freopen (TASKNAME".out", "w", stdout);
    #else
       freopen ("input.txt", "r", stdin);
       freopen ("output.txt", "w", stdout);
    #endif
    */
    for (int i = 1; i <= 5; ++i) 
        for (int j = 1; j <= 5; ++j)
            cin >> a[i][j];
    int b[6] = {0, 1, 2, 3, 4, 5};
    do {
        int cur = 0;
        cur = (a[b[1]][b[2]] + a[b[2]][b[1]] + a[b[3]][b[4]] + a[b[4]][b[3]] + a[b[2]][b[3]] + a[b[3]][b[2]] + a[b[4]][b[5]] + a[b[5]][b[4]] + a[b[3]][b[4]] + a[b[4]][b[3]] + a[b[4]][b[5]] + a[b[5]][b[4]]);
        if (ans < cur) ans = cur;
    }  while (next_permutation(b + 1, b + 6));
    cout << ans;
    return 0;
}
