#include<bits/stdc++.h>
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,a,b,r,l,t,i;
    //string s;
    cin>>t;
    for(l=0;l<t;l++){
        int x,y,k,m,sam,co=0,ce=0;
        cin>>n>>m>>k;
        vector<int> vc;
        vector<int> vt;
        vector<pair<int,int>> vpair;
        for(i=0;i<n;i++){
            cin>>a;
            vc.push_back(a);
        }
        for(i=0;i<n;i++){
            cin>>b;
            vt.push_back(b);
        }
        for(i=0;i<n;i++){
            pair<int,int> p;
            p.first=vt[i];
            p.second=vc[i];
            vpair.push_back(p);
        }
        sort(vpair.begin(),vpair.end());
        


    }
}