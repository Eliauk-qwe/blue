// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> height(n + 1, 0);  // 当前高度
//     vector<int> max_h(n + 1, 0);   // 最大高度

//     int dir = 1;       // 方向：1向右，-1向左
//     int pos = 1;       // 当前修剪位置

//     // 暴力循环足够多次，保证最大值稳定
//     for (int day = 0; day < 4 * n; ++day) {
//         // 1. 所有树长高 1cm
//         for (int i = 1; i <= n; ++i) {
//             height[i]++;
//             if (height[i] > max_h[i]) {
//                 max_h[i] = height[i];
//             }
//         }

//         // 2. 修剪当前位置，归 0
//         height[pos] = 0;

//         // 3. 移动位置 + 转向
//         pos += dir;

//         if (pos > n) {
//             dir = -1;
//             pos = n - 1;
//         }
//         if (pos < 1) {
//             dir = 1;
//             pos = 2;
//         }
//     }

//     // 输出答案
//     for (int i = 1; i <= n; ++i) {
//         cout << max_h[i] << endl;
//     }

//     return 0;
// }



#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main(){
  ll n;
  cin >>n;

  vector<ll> height(n+1,0);
  vector<ll> maxh(n+1,0);


  ll dir=1;
  ll pos=1;



  for(ll i=0;i<4*n;i++){

    for(ll j=1;j<=n;j++){
      height[j]++;
      if(height[j]>maxh[j]){
        maxh[j]=height[j];
      }
    }


    height[pos]=0;

    pos+=dir;

    if(pos>n){
      pos=n-1;
      dir=-1;
    }

    if(pos<1){
      pos=2;
      dir=1;
    }


  }


  for(ll i=1;i<=n;i++){
    cout << maxh[i]<<endl;
  }

  return 0;




}