#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long int n,b,r,l,j,i;
    string s;
    char a;
    cin>>n;
    for(l=0;l<n;l++){
        long int x,y,k,sams=0,samd=0,samc=0,samf=0;
        cin>>x>>y>>k;
        char mat[x][y];
        for(i=0;i<x;i++){
            for(j=0;j<y;j++){
                cin>>a;
                mat[x][y]=a;
                if(a=='*'){
                    sams++;
                }
                // else{
                //     samd++;
                // }
            }
        }
        //vector<int> v;
        for(i=0;i<x;i++){
            for(j=0;j<y;j++){
                if(mat[i][j]=='*'){
                    cout<<"in"<<endl;
                    int t1=i;
                    int t2=j;
                    int temp=0;
                    while(1){
                        if(mat[t1+1][t2+1]!='*' || t1>=x || t2>=y){
                            samc++;
                            break;
                        }
                        t1++;
                        t2++;
                        temp++;

                    }
                    while(1){
                        if(mat[t1+1][t2-1]!='*' || t1>=x || t2>=y || t1<0 || t2<0){
                            samc++;
                            break;
                        }
                        t1++;
                        t2--;
                        temp++;
                    }
                    cout<<temp<<"-temp"<<endl;
                    if(2*k + 1 <= temp+2){
                        samf=samf+temp;
                        cout<<temp<<"-temp"<<endl;
                    }
                }
            }
        }

        if(samf>=sams){
            cout<<"YES"<<endl;
        }
        // else{
        //     cout<<"NO"<<endl;
        // }
        // sams=0;samd=0;samc=0;samf=0;
    }
}
