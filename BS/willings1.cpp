#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {

  int n,m,k,sam=0;
  cin>>n>>m>>k;
  string s;
  vector<string> v;
  for(int i=0;i<n;i++){
    cin>>s;
    v.push_back(s);
  }

  // int m=v[0].size();
  // cout<<n<<" "<<m<<" "<<k<<endl;
  set<int> row;
  set<int> column;
  for(int i=0;i<n;i++){
    for(int j=0;j<v[0].size();j++){
      if(v[i][j]=='B'){
        row.insert(i);
        column.insert(j);
      }
    }
  }
  priority_queue<int> high;
  priority_queue<int, vector<int>, greater<int>> low;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(v[i][j]=='B'){
            continue;
        }
      else if(row.find(i)!=row.end() || column.find(j)!=column.end()){
        high.push(v[i][j]-'0');
        // cout<<v[i][j]-'0'<<" high"<<endl;
      }
      else{
        low.push(v[i][j]-'0');
      }
    }
  }

  while(k && high.size() && low.size()){
    if(high.top()<=low.top()){
      break;
    }
    else{
      int x=high.top();
      high.pop();
      int y=low.top();
      low.pop();
      low.push(x);
      high.push(y);
    }
    k--;
  }
  // int sam=0;
  while(!low.empty()){
    // cout<<low.top()<<" low"<<endl;
    sam+=low.top();
    low.pop();
  }
  // argv = *to_string(sam);

  cout<<sam<<endl;
  return 0;
}