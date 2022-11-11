#include<iostream>
#include<cstdio>
#include<sstream>
#include<fstream>
#include<cctype>
#include<cstdlib>
#include<cmath>
#include<ctime>
#include<cstring>
#include<string>
#include<complex>
#include<bitset>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#include<queue>
#include<deque>
#include<stack>
#include<iomanip>
#include<utility>

#define pb push_back
#define pp pop_back
#define xx first
#define yy second
#define mp make_pair

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const int maxn=10000+10;

bool mark[maxn];
int p,q,l,r;
int d[maxn],c[maxn];
int ans;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>p>>q>>l>>r;
	for(int i=1;i<=p;i++){
		int a,b;
		cin>>a>>b;
		for(int j=a;j<=b;j++)mark[j]=true;
	}
	for(int i=1;i<=q;i++)cin>>c[i]>>d[i];
	for(int i=l;i<=r;i++){
		bool f=0;
		for(int j=1;j<=q;j++){
			int le=c[j]+i;
			int ri=d[j]+i;
			for(int k=le;k<=ri;k++){
				if(mark[k])f=true;
			}
		}
		if(f)ans++;
	}
	cout<<ans<<endl;
	return 0;
}


