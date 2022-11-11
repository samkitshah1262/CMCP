#include "bits/stdc++.h"
using namespace std;

using ll = long long;

const int maxn=1e5+5;
int tt;
int n,q;
int a[maxn];
ll p[maxn],x[maxn];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> tt;
	while(tt--){
		cin >> n >> q;
		for(int i = 1;i <= n;i++) cin >> a[i];
		p[1] = x[1] = a[1];
		for(int i = 2;i <= n;i++){
			p[i] = p[i-1] + a[i];
			x[i] = x[i-1] ^ a[i];
		}
		int l,r; cin >> l >> r;
		ll jog = p[r] - p[l-1] - (x[r] ^ x[l-1]);
		
		int ansl = l,ansr = r;
		for(int i = l;i <= r;i++){
			int cp = l,sg = i,md,jg=-1;
			while(cp <= sg){
				md = (cp + sg) >> 1;
				if(p[i] - p[md-1] - (x[i] ^ x[md-1]) == jog){
					if(i-md+1 < ansr-ansl+1){
						ansl = md,ansr=i;
					}
					cp=md+1;
				}
				else sg=md-1;
			}
		}
		cout<<ansl<<' '<<ansr<<'\n';
	}
}