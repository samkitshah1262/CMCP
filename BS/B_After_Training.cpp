#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <limits>
#include <utility>
#include <iomanip>
#include <cassert>
#include <cmath>
#include <map>
#include <stack>
#include <numeric>
#include <set>

#define endl '\n'
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int l, r;
    vector<int> nums;
    if (m % 2) {
        int mid = (m+1) / 2;
        nums.push_back(mid);
        l = mid-1;
        r = mid+1;
    } else {
        l = m / 2;
        r = l+1;
    }

    for (int i = 0; i < m / 2; i++) {
        nums.push_back(l--);
        nums.push_back(r++);
    }

    for (int i = 0; i < n; i++) {
        cout << nums[i % m] << endl;
    }
    
    return 0;
}