// #include <iostream>
// using namespace std;

// const int MOD = 1e9 + 7;
// int n, m;
// int ans = 0;

// // 检查一个顺序是否合法：a[0]~a[len-1]，1=店，0=花
// bool check(int a[], int len) {
//     int shop = 0, flower = 0;
//     int wine = 2;

//     for (int i = 0; i < len; i++) {
//         if (a[i] == 1) {
//             // 遇到店：酒翻倍
//             wine *= 2;
//             shop++;
//         } else {
//             // 遇到花：必须有酒才能喝
//             if (wine == 0) return false;
//             wine--;
//             flower++;
//         }
//     }

//     // 必须满足：店n次，花m次，酒0，最后一个是花
//     if (shop == n && flower == m && wine == 0 && a[len-1] == 0) {
//         return true;
//     }
//     return false;
// }

// int main() {
//     cin >> n >> m;
//     int total = n + m;

//     // 暴力枚举所有 0/1 组合（1=店，0=花），总长度 total
//     // 用数字模拟所有排列（小数据可跑）
//     for (int mask = 0; mask < (1 << total); mask++) {
//         int a[205] = {0};
//         int cnt1 = 0, cnt0 = 0;

//         // 把 mask 转成 0/1 序列
//         for (int i = 0; i < total; i++) {
//             a[i] = (mask >> i) & 1;
//             if (a[i] == 1) cnt1++;
//             else cnt0++;
//         }

//         // 必须正好 n 个店，m 个花，才继续检查
//         if (cnt1 != n || cnt0 != m) continue;

//         // 检查是否合法
//         if (check(a, total)) {
//             ans = (ans + 1) % MOD;
//         }
//     }

//     cout << ans << endl;
//     return 0;
// }



#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD=1e9+7;

int check(ll a[],ll len){

  ll sum=2;

  for(ll i=0;i<len;i++){
    if(a[i]==0) sum=sum*2;
    else {
      if(sum==0) return 0;

      sum--;
    }

    if(i==len-1){
      if(a[i]==1 && sum==0)  return 1; 
    }
  }

  return 0;

}







int main(){

  ll n,m;
  cin >> n>> m;


  ll total= n+m;
  ll count=0;

  for(ll i=0;i<(1LL<< total);i++){
    ll a[205]={0};
    ll cnt0=0,cnt1=0;

    for(int j=0;j<total;j++){
      a[j]=(i>>j)&1;

      if(a[j]==0) cnt0++;
      else if(a[j]==1) cnt1++;

    }

    if(cnt0!=n || cnt1 !=m)  continue;

    if(check(a,total))  count=(count+1)%(MOD);

  }

  ll ans=count%(MOD);

  cout << ans;



}