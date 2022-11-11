#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       
        int n;
        cin>>n;
        int arr[n+1][n];
        vector<int>v(n+1);
        fill(v.begin(),v.end(),0);
        for(int i=0;i<n;i++){
            cin>>arr[0][i];
            //cout<<arr[0][i]<<" ";
            v[arr[0][i]]++;
            //cout<<v[arr[0][i]]<<" "<<arr[0][i]<<endl;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=v[arr[i-1][j]];
            }
            fill(v.begin(),v.end(),0);
            for(int j=0;j<n;j++){
                v[arr[i][j]]++;
            }

        }
        int q;
        cin>>q;
        //cout<<q<<endl;
        int x,y;
        while(q--){
           cin>>x>>y;
           if(y<=n){
               cout<<arr[y][x-1]<<endl;
           }
           else{
               cout<<arr[n][x-1]<<endl;
           }
        }

    }
}