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

 
/*
There is a water container system with N identical containers, which can be represented as a tree, where each container is a vertex. The containers are connected to each other with N−1 bidirectional pipes. Two containers connected to each other are always placed on adjacent levels. Formally, if two containers a and b are connected to each other, then |levela−levelb|=1. Container 1 is placed at the bottommost level. Each container is connected to exactly one container on the level below (the only exception is container 1, which has no connections below it), but can be connected to zero or more containers on the level above. The maximum capacity of each container is 1 liter, and initially all the containers are empty. Assume that the pipe has a capacity of 0 liters. In other words, they do not store any water, but only allow water to pass through them in any direction.

Consider the following diagram which is an example of a water container system:

Image of the water container system for the problem statement

The first level of the system consists of a single container, container 1 (root). Container 1 is connected to container 2 and container 3, which are present in the above level, level 2. Container 2 is also connected to container 4, which is present at level 3.

You are given Q queries. Each query contains a single integer i which represents a container. For each query, add an additional 1 liter of water in container i.

The following diagram illustrates the flow of the water in the system in different conditions:

Image describing the flow of water in the water container system

In step 1, after adding 1 liter of water in container 3, the water flows downward because the water containers at the lower level are still empty.
In step 2, after adding 1 liter of water in container 3, the water flows downward, but as the container 1 is already filled completely, the water is distributed evenly between water containers 2 and 3.
In step 3, after adding 1 liter of water in container 3, the water containers 2 and 3 are completely filled.
In step 4, after adding 1 liter of water in container 3, the water is pushed up to water container 4, which is then completely filled.
As illustrated in the example above, containers at the same level will have the same amount of water. Find the number of water containers that are completely filled after processing all the queries.
*/


void solve(ll t){
    long long int i,n,x,y,a,b,c,sam=0;
    cin>>n>>x;
    vector<vector<int>> v(n);
    for(i=0;i<n-1;i++){
        cin>>a>>b;
        a--;b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    vector<int> useless;
    forn(i,x){
        cin>>a;
        useless.push_back(a);
    }
    vector<bool> vis(n,false);
    vector<int> level(n,0);
    level[0]=1;
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int k=q.front();
        q.pop();
        vis[k]=true;
        int sz=v[k].size();
        if(k!=0){
            sz--;
        }
        for(int i=0;i<sz;i++){
            if(!vis[v[k][i]]){
                q.push(v[k][i]);
                level[v[k][i]]=level[k]*sz;
            }
        }
    }
    
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll tt;
    cin>>tt;
    ll x=tt;
    while(tt--){
        solve(x-tt);
    }

//solve();

    return 0;
}