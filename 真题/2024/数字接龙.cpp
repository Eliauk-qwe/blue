#include <bits/stdc++.h>
using namespace std;

const int N = 12;

int qipan[N][N];
bool flag[N][N];
bool edge[N][N][N][N];
int n, k;
string path;

// 方向编号0~7：上、右上、右、右下、下、左下、左、左上
int dx[8] = {-1, -1, 0, 1, 1,  1,  0, -1};
int dy[8] = { 0,  1, 1, 1, 0, -1, -1, -1};

bool dfs(int a, int b) {
    // 走满 n*n 步且落在右下角
    if ((int)path.size() == n * n - 1)
        return a == n  && b == n ;

    flag[a][b] = true;
    for (int i = 0; i < 8; i++) {
        int x = a + dx[i], y = b + dy[i];
        if (x < 1 || x > n || y < 1 || y > n) continue;
        if (flag[x][y]) continue;
        if (qipan[x][y] != (qipan[a][b] + 1) % k) continue;
        // 对角线交叉检测：奇数方向才是对角线
        if (i % 2 == 1) {
            // 与当前对角线交叉的另一条：(a, y) <-> (x, b)
            if (edge[a][y][x][b] || edge[x][b][a][y]) continue;
        }

        edge[a][b][x][y] = true;
        path += (char)('0' + i);
        if (dfs(x, y)) return true;
        path.pop_back();
        edge[a][b][x][y] = false;
    }
    flag[a][b] = false;
    return false;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> qipan[i][j];

    if (dfs(1, 1))
        cout << path << endl;
    else
        cout << -1 << endl;

    return 0;
}
