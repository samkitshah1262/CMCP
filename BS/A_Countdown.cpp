#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,a,b,r,l,i;
    string s;
    cin>>n;
    for(l=0;l<n;l++){
        int x=0,y=0,k,sam=0;
        cin>>k;
        cin>>s;
        for(i=0;i<k;i++){
            
            if(s[i]!='0'){
                sam++;

                if(i==k-1){
                    
                if(s[i]=='1'){
                    y++;
                }
                else if(s[i]=='2'){
                    y=y+2;
                }
                else if(s[i]=='3'){
                    y=y+3;
                }
                else if(s[i]=='4'){
                    y=y+4;
                }
                else if(s[i]=='5'){
                    y=y+4;
                }
                else if(s[i]=='6'){
                    y=y+6;
                }
                else if(s[i]=='7'){
                    y=y+7;
                }
                else if(s[i]=='8'){
                    y=y+8;
                }
                else if(s[i]=='9'){
                    y=y+9;
                }
                }
                else{
                    x++;
                
                if(s[i]=='1'){
                    y++;
                }
                else if(s[i]=='2'){
                    y=y+2;
                }
                else if(s[i]=='3'){
                    y=y+3;
                }
                else if(s[i]=='4'){
                    y=y+4;
                }
                else if(s[i]=='5'){
                    y=y+4;
                }
                else if(s[i]=='6'){
                    y=y+6;
                }
                else if(s[i]=='7'){
                    y=y+7;
                }
                else if(s[i]=='8'){
                    y=y+8;
                }
                else if(s[i]=='9'){
                    y=y+9;
                }
                }
            }
        }
        if(sam==k){
            x++;
        }
        // if(s[k-1]!=0){
        //     x--;
        // }
        //cout<<x<<endl<<y<<endl;
        cout<<x+y<<endl;
    }
}