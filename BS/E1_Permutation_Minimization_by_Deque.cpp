#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long int n;
    //string s;
    cin>>n;
    for(int l=0;l<n;l++){
        long int x,y=0,k,sam=0,a,b,r,i;
        cin>>k;
        //cin>>s;
        //vector<int> v;
        deque<long int> d;
        cin>>b;
        x=b;
        d.push_back(b);
        for(i=1;i<k;i++){
            cin>>a;
            //cout<<a<<endl;
            if(a>x){
                d.push_back(a);
                //x=a;
                x=d[0];
            }
            else{
                d.push_front(a);
                x=d[0];
            }
        }
        for(int j=0;j<d.size();j++){
            cout<<d[j]<<" ";
        }
        cout<<endl;
    }
}