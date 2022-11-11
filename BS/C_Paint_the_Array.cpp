#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAX = 1000000000000;
void solve(void)
{
    ll n;
    cin >> n;
    ll arr[n];
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    ll Gcd = arr[1];
    for(int i = 1 ; i < n ; i += 2)
    {
        Gcd = __gcd(Gcd,arr[i]);
    }
    if(Gcd == 1)
    {
        Gcd = arr[0];
        for(int i = 0 ; i < n ; i += 2)
                {
                    Gcd = __gcd(Gcd,arr[i]);
                }
                if(Gcd == 1)
                {
                    cout << 0 << "\n";
                    return;
                }
                for(int i = 1 ; i < n ; i += 2)
                {
                    if(arr[i]%Gcd == 0)
                    {
                        cout << 0 << "\n";
                        return;
                    }
                }
                cout << Gcd << "\n";
                return;
    }
    else
    {
        for(int i = 0 ; i < n ; i += 2)
        {
            if(arr[i]%Gcd == 0)
            {
                Gcd = arr[0];
                for(int i = 0 ; i < n ; i += 2)
                {
                    Gcd = __gcd(Gcd,arr[i]);
                }
                if(Gcd == 1)
                {
                    cout << 0 << "\n";
                    return;
                }
                for(int i = 1 ; i < n ; i += 2)
                {
                    if(arr[i]%Gcd == 0)
                    {
                        cout << 0 << "\n";
                        return;
                    }
                }
                cout << Gcd << "\n";
                return;
            }
        }

        cout << Gcd << "\n";
    }
    return;
}
int main(void)
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}