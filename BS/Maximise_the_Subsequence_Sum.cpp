#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,a,x,k,b,r,l,i,y,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x>>k;
        vector<vector<int>> vf;
        vector<int> vc;
        vector<int> vo;
        vector<int> vsum;
        for(j=0;j<x;j++){
            vector<int> v;
            cin>>a;
            v.push_back(a);
            v.push_back(j);
            vf.push_back(v);
            vo.push_back(a);
        }
        sort(vc.begin(),vc.end());
        vector<int> va;
        if(k==0){
            for(int q=0;q<x;q++){
                if(vo[q]<0){
                    continue;
                }
                else{
                    vsum.push_back(vo[q]);
                }
            }
            int su=accumulate(vsum.begin(),vsum.end(),0);
            cout<<su<<endl;
        }
        else{
            for(int u=0;u<k;u++){
                int e= vc[u];
                va.push_back(e);
            }
        }
    }
}