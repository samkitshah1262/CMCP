#include<bits/stdc++.h>
using namespace std;


// int max_val(int a,int b, int c){
//     if(a>=b && a>=c){

//     }
// }


int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long long int n,a,x,b,r,c,m,l,i,y,p,k,da,db,dc;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b>>c>>m;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
        a=v[0]; b=v[1]; c=v[2];

        // da=a-b-c;
        // db=b-c-a;
        // dc=c-a-b;
        // while(m!=0){
        //     if(a==0 && b==0 && c==0){
        //         break;
        //     }
        //     x=max(a,b,c);
        //     cout<<x<<endl;
        //     x--;
        // }
        if(c-a-b-1<=m && m<=a+b+c-3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}
