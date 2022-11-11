#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second
#define mp make_pair
#define pb push_back
#define sqr(a) ((a) * (a))
#define sz(a) int(a.size())
#define all(a) a.begin(), a.end()
#define forn(i, n) for(int i = 0; i < int(n); i++) 
#define fore(i, l, r) for(int i = int(l); i < int(r); i++)

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

template <class A, class B> ostream& operator << (ostream& out, const pair<A, B> &a) {
	return out << "(" << a.x << ", " << a.y << ")";
}

template <class A> ostream& operator << (ostream& out, const vector<A> &v) {
	out << "[";
	forn(i, sz(v)) {
		if(i) out << ", ";
		out << v[i];
	}
	return out << "]";
}

mt19937 rnd(time(NULL));

const int INF = int(2e9);
const li INF64 = li(1e18);
const int MOD = INF + 7;
const ld EPS = 1e-9;
const ld PI = acos(-1.0);

const int N = 100 * 1000 + 13;

int n, m, s, f;
pair<int, pt> a[N];

bool read () {
	if (scanf("%d%d%d%d", &n, &m, &s, &f) != 4)
		return false;
	--s, --f;
	forn(i, m){
		scanf("%d%d%d", &a[i].x, &a[i].y.x, &a[i].y.y);
		--a[i].y.x, --a[i].y.y;
	}
	return true;
}

string al = "RL";

bool in(int x, int l, int r){
	return x >= l && x <= r;
}

void solve() {
	int fl = 0;
	
	if (f < s)
		fl = 1;
	
	a[m++] = mp(INF, mp(-1, -1));
	int lst = 1;
	forn(i, m){
		int t = a[i].x;
		int l = a[i].y.x;
		int r = a[i].y.y;
		
		forn(j, min(abs(f - s), t - lst))
			printf("%c", al[fl]);
		s += min(abs(f - s), t - lst) * (fl ? -1 : 1);
		
		if (s == f) break;
		
		if (in(s, l, r) || in(s + (fl ? -1 : 1), l, r)){
			printf("X");
		}
		else{
			printf("%c", al[fl]);
			s += (fl ? -1 : 1);
		}
		
		lst = t + 1;
	}
	
	puts("");
}

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	
	int tt = clock();
	
#endif
	
	cerr.precision(15);
	cout.precision(15);
	cerr << fixed;
	cout << fixed;

	while(read()) {	
		solve();
		
#ifdef _DEBUG
	cerr << "TIME = " << clock() - tt << endl;
	tt = clock();
#endif

	}
}