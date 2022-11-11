#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,a;
    cin>>n;
    if(n<40 && n>=0){
        a=40-n;
        cout<<a;
    }
    else if(n>=40 && n<70){
        a=70-n;
        cout<<a;
    }
    else if(n>=70 && n<90){
        a=90-n;
        cout<<a;
    }
    else if(n>=90){
        cout<<"expert";
    }
    
}