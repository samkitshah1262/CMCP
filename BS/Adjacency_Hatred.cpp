#include <bits/stdc++.h>
using namespace std;

#define ll                      long long
#define rep(i,a,b)              for(ll i = a ; i < b ; i++)
#define repn(i,a,b)             for(ll i = a ; i >= b ; i--)
#define push                    push_back
#define vll                     vector<ll>
#define mll                     map<ll,ll>
#define pll                     pair<ll,ll>
#define vpll                    vector<pair<ll,ll>>

void solve(void)
{
    int n;
    cin >> n;
    ll arr[n];
    vll v1,v2;
    ll co = 0,ce = 0;
    rep(i,0,n)
    {
        cin >> arr[i];
        if(arr[i]%2 == 0)
        {
            v2.push(arr[i]);
            ce++;
        }
        else
        {
            v1.push(arr[i]);
            co++;
        }
    }
    if(ce == n || co == n)
    {
        cout << -1 << "\n";
        return;
    }
    else
    {
        rep(i,0,n)
        {
            if(i < co)
                arr[i] = v1[i];
            else
                arr[i] = v2[i - co];
        }
    }
    rep(i,0,n)
        cout << arr[i] << " ";
    cout << endl;
    return;
}

int main(void)
{
    int t;
    cin >> t;
    while(t--)
        solve();
}