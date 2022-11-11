#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    int count=1;
    int max=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
       
    }
    int j=0;
    int k,t;
    while(j<n){
         count=1;
         a=j;
         k=j+1;
         t=j-1;
        
         while(arr[j]>=arr[k] && k<n){
             count++;
           
             k++;
              j++;
            
         }
         j=a;
         while(arr[t]<=arr[j] && t>=0){
             count++;
             t--;
             j--;
            
         }
        j=a;
        if(count>max){
            max=count;
        } 
        j++;
       
    }
  cout<<max;
}