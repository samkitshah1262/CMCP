#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long long int n,a,x,b,r,l,i,y=0,k;
    cin>>n;
    
    
    for(int p=0;p<n;p++){
        cin>>x>>k;
        //cout<<x<<endl<<k<<endl;
        string s;
        cin>>s;
        
        int c=0;
        for(int j=0;j<x-1;j++){
            if(s[j]!=s[j+1]){
                c++;
            }
        }
        //cout<<c<<endl;
        if(c>=k){
            if(s[0]=='1'){
                    
                
            for(int u=x-1;u>=0;u--){
                if(k%2!=0){
                if(s[u]=='0'){
                    int sam=u+1;
                    cout<<sam<<endl;
                    //return 0;
                    break;
                }   
                }
                else{
                   
                if(s[u]=='1'){
                    int sam=u+1;
                    cout<<sam<<endl;
                    //return 0;
                    break;
                }   
                }
            }
            }
            
            else{
                 for(int u=x-1;u>=0;u--){
                if(k%2!=0){
                if(s[u]=='1'){
                    int sam=u+1;
                    cout<<sam<<endl;
                    //return 0;
                    break;
                }   
                }
                else{
                    if(s[u]=='0'){
                    int sam=u+1;
                    cout<<sam<<endl;
                    //return 0;
                    break;
                }
                }
            }
            }
            
        }
        else{
            cout<<-1<<endl;
        }
        // if(s[0]=='1'){
        //     string t="1";
        //     for(i=1;i<=k;i++){
        //         if(i%2!=0){
        //             t=t+"0";
        //         }
        //         else{
        //             t=t+"1";
        //         }
        //     }

        // }
    }
}