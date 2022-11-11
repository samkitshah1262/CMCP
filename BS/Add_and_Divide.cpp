#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  long int a;
  //vector<long int> v;
  
    cin>>a;
    while(a--){
        long int n,x,b,r,l,i,y,j,p,k;
        //v.push_back(1);
        //cout<<1;
        cin>>n>>b;
        int sam=0;
        
        while(n%2==0){
            // if(v.size()==1){
            //     v.push_back(2);
            // }
            if(b%2!=0){
                sam++;
                break;
            }
            n=n/2;
        }
        for (i = 3; i <= sqrt(n); i = i + 2){
        // While i divides n, print i and divide n
        while (n % i == 0){
            // if(v[v.size()-1]!=i){
            //     v.push_back(i);
            // }
            if(b%i!=0){
                sam++;
                break;
            }
            //cout << i << " ";
            n = n/i;
        }
    }
    if (n > 2){
        //v.push_back(n);
        //cout << n << " ";
        if(b%n!=0){
            sam++;
        }
        }
        // for(k=0;k<v.size();k++){
        //     if(b%v[k]!=0){
        //         //cout<<"NO"<<endl;
        //         sam++;
        //         break;
        //     }
        // }
        if(sam!=0){
            cout<<"NO"<<endl;
            //cout<<sam<<endl;
            //v.clear();
        }
        else{
            cout<<"YES"<<endl;
            //v.clear();
        }
    }
}