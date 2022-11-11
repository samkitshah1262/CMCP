#include<bits/stdc++.h>
using namespace std;

int div(int n){
    int c=0;
    while(n>0 && n%2==0){
        c++;
        n=n/2;
    }
    return c;
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,a,b,r,l,i;
    //string s;
    cin>>n;
    for(l=0;l<n;l++){
        int x,y,k,sam=9999,co=0,ce=0;
        //cin>>k;
        cin>>k;
        vector<int> v;
        for(i=0;i<k;i++){
            cin>>a;
            v.push_back(a);
            if(a%2==0){
                sam=min(sam,div(a));
                ce++;
            }
            else{
                co++;
            }
        }
        if(co==0){
            cout<<sam<<endl;
        }
        else{
            cout<<0<<endl;
        }
        //sort(v.begin(),v.end());

    //     cout<<sam<<" sam"
    //     while(sam!=1){
    //         sam=sam/2;
    //         c++;
    //     }
    //     cout<<c<<endl;
    }
}
