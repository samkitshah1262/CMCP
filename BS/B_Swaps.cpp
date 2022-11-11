#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,a,x,b,r,l,i,y,k;
    cin>>n;
    for(i=0;i<n;i++){
        int sam=0,samkit=0;
        cin>>k;
        vector<int> v1;
        vector<int> v2;
        vector<int> cnt;
        for(int j=0;j<k;j++){
            cin>>a;
            v1.push_back(a);
        }
        for(int j=0;j<k;j++){
            cin>>a;
            v2.push_back(a);
        }
        for(int p=0;p<k;p++){
            samkit++;
            for(int r=0;r<k;r++){
                if(v1[r]>v2[p]){
                    sam++;
                }
                else{
                    cnt.push_back(sam+samkit);
                    sam=0;
                    break;
                }
            }
        }
        sort(cnt.begin(),cnt.end());
        cout<<cnt[0]-1<<endl;
    }
}
