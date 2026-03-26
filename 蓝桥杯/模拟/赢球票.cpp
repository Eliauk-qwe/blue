#include <bits/stdc++.h>
using namespace std;

int n;
int a[105];

int simulate(int start) {
    bool taken[105] = {};
    int sum = 0;
    int pos = start;
    int cnt = 1;

    while (true) {
        bool found = false;
        // 遍历圆圈一整圈（只对未拿走的牌数数）
        int checked = 0; // 已检查的未拿走牌数
        int remaining = 0;
        for (int i = 0; i < n; i++) if (!taken[i]) remaining++;
        if (remaining == 0) break;

        for (int step = 0; step < n * n && !found; step++) {
            int idx = (pos + step) % n;
            if (taken[idx]) continue;
            if (a[idx] == cnt) {
                taken[idx] = true;
                sum += a[idx];
                pos = (idx + 1) % n;
                cnt = 1;
                found = true;
            } else {
                cnt++;
                checked++;
                if (checked >= remaining) break; // 转了一圈没找到
            }
        }
        if (!found) break;
    }
    return sum;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;
    for (int i = 0; i < n; i++)
        ans = max(ans, simulate(i));

    cout << ans << endl;
    return 0;
}
