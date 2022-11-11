#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
using pi = pair<int, int>;
using pl = pair<ll, ll>;


#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl '\n'
#define forn(i, n) for(ll i = 0; i < n; i++)
#define fora(i, a, n) for(ll i = a; i < n; i++)
#define inp(e) int e; cin >> e
#define inpl(e) ll e; cin >> e
#define inps(e) string e; cin >> e
#define T int tt; cin >> tt; while(tt--)


template<typename U>
void print(U arr) {
    for(auto element: arr) {
        cout << element << " ";
    }
    cout << endl;
}

// read and write into files, rather than standard i/o
void setup(string s) {
    freopen((s+".in").c_str(), "r", stdin);
    freopen((s+".out").c_str(), "w", stdout);
}

const int M = 1e9+7;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    void f(vector<vi>& v,int m,int n,ListNode*head,int i,int j){
        if(head==NULL){
            return;
        }
        if(v[i][j+1]==-1 && j+1<n){
            v[i][j+1]=head->val;
            f(v,m,n,head->next,i,j+1);
        }
        else if(v[i+1][j]==-1 && i+1<m){
            v[i+1][j]=head->val;
            f(v,m,n,head->next,i+1,j);
        }
        else if(v[i][j-1]==-1 && j-1>=0){
            v[i][j+1]=head->val;
            f(v,m,n,head->next,i,j-1);
        }
        else if(v[i-1][j]==-1 && i-1>=0){
            v[i-1][j]=head->val;
            f(v,m,n,head->next,i-1,j);
        }
        return;
    }
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vi> v(m,vi(n,-1));
        int flag=0;
        int i=0,j=0,nextj=n,nexti=m;
        // while(true){
        //     if(flag==0){
        //         int sam=0;
        //         if(j<nextj){
        //             sam=1;
        //         }
        //         while(true){
        //             if(j==nextj){
        //                 break;
        //             }
        //             v[i][j]=head->val;
        //             if(!head->next){
        //                 return v;
        //             }
        //             head=head->next;
        //             nextj=
        //         }
        //     }
        // }
        f(v,m,n,head,0,0);
        return v;
    }
};