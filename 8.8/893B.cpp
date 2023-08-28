#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s; cin>>s;
		int p=-1;
		for(int i=s.length();i;i--){
		  if(s[i]>='5'){
		    s[i-1]++;
		    p=i;
		  };
		};
		if(s[0]>='5') p=0, cout << 1;
		if(p != -1){
		  for(int i=p;i<s.length();i++) s[i]='0';
		}
		cout << s << endl;
	}
	return 0;

}