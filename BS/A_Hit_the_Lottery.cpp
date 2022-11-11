#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll r = n/100LL;
    n %= 100LL;
    r += n/20LL;
    n %= 20LL;
    r += n/10LL;
    n %= 10LL;
    r += n/5LL;
    n %= 5LL;
    r += n;
    cout << r;
    return 0;
}
