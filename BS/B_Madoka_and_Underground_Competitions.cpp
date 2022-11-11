#include<bits/stdc++.h>
using namespace std;
int T,n,k,r,c;
int main(){
	cin>>T;
	while(T--){
		cin>>n>>k>>r>>c;
		for(int i=1;i<=n;cout<<endl,i++)
			for(int j=1;j<=n;j++)
				if((i+j)%k==(r+c)%k)putchar('X');
				else putchar('.');
	}
	return 0;
}