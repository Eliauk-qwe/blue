#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;

// 题目给的魔法公式
ll magic(ll h) {
    ll val = h / 2;
    val += 1;
    return (ll)sqrt(val);
}

// 判断所有竹子是不是都变成 1 了
bool allOne(vector<ll>& a) {
    for (ll x : a) {
        if (x != 1) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<ll> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int ans = 0; 

    // 暴力循环：每次找一段连续相同的竹子，砍一刀
    while (!allOne(h)) {
        // 从头到尾找连续相同的段
        for (int i = 0; i < n; ) {
            if (h[i] == 1) { // 已经是1，跳过
                i++;
                continue;
            }

            // 找到一段连续相等的起点 i
            ll cur = h[i];
            int r = i;
            while (r < n && h[r] == cur) {
                r++;
            }
            r--; // 区间 [i, r]

            // 对这段使用魔法
            ans++;
            ll newH = magic(cur);
            for (int j = i; j <= r; j++) {
                h[j] = newH;
            }

            i = r + 1; // 继续下一段
        }
    }

    cout << ans << endl;
    return 0;
}