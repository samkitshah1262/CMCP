#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,a,b,r,l,i;
    string s;
    cin>>n;
    for(l=0;l<n;l++){
        int x,y,k,sam=0;
        //cin>>k;
        cin>>x>>y;
        vector<int> v;
        b=x-y;
        if(y==x-1){
            cout<<-1;
            //return 0;

        }
       
        else{
            for(i=1;i<=x;i++){
                v.push_back(i);
                //cout<<i<<endl;
            }
            //cout<<b<<" b"<<endl;

            if(b==2){
                swap(v[0],v[1]);
            }
            else{
                for(int j=1;j<=b-1;j++){
                    //cout<<v[j]<<"sss"<<v[j+1]<<endl;
                    swap(v[j-1],v[j]);
                    //cout<<v[j]<<"sss"<<v[j+1]<<endl;
                }
                
            }
            for(int g=0;g<v.size();g++){
                    cout<<v[g]<<" ";
                }
        }
        cout<<endl;
    }
}
