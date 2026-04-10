// #include <iostream>
// using namespace std;

// const int MAX = 505;
// int a[MAX][MAX];  // 存储矩阵

// int main() {
//     int n, m, K;
//     cin >> n >> m >> K;

//     // 读入矩阵
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             cin >> a[i][j];
//         }
//     }

//     int ans = 0;  // 答案：符合条件的子矩阵数量

//     // 暴力枚举所有可能的子矩阵
//     // 1. 枚举子矩阵的**上边界**
//     for (int top = 1; top <= n; top++) {
//         // 2. 枚举子矩阵的**下边界**
//         for (int bot = top; bot <= n; bot++) {
//             // 3. 枚举子矩阵的**左边界**
//             for (int l = 1; l <= m; l++) {
//                 // 4. 枚举子矩阵的**右边界**
//                 for (int r = l; r <= m; r++) {
//                     // 计算这个子矩阵的和
//                     int sum = 0;
//                     for (int i = top; i <= bot; i++) {
//                         for (int j = l; j <= r; j++) {
//                             sum += a[i][j];
//                         }
//                     }
//                     // 如果和 <= K，答案 +1
//                     if (sum <= K) ans++;
//                 }
//             }
//         }
//     }

//     cout << ans << endl;
//     return 0;
// }



#include <bits/stdc++.h>

using namespace std;

// typedef namespace std;
typedef long long ll;


const int MAX=505;

ll a[MAX][MAX];

int main(){
  ll n,m,k;
  cin >> n >> m >> k;

  ll count=0;

  for(ll i=1;i<=n;i++){
    for(ll j=1;i<=m;j++){
      cin >> a[i][j];
    }
  }


  for(ll top=1;top<=n;top++){
    for(ll bot=top;bot<=n;bot++){
      for(ll l=1;l<=m;l++){
        for(ll r=l;r<=m;r++){
          ll sum=0;
          for(ll i=top;i<=bot;i++){
            for(ll j=l;l<=r;l++){
              sum+=a[i][j];

            }
          }

          if(sum<=k) count++;
        }
      }
    }
  }


  cout << count;




  return 0;
}