#include <bits/stdc++.h>

using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0);

typedef long long ll;

const ll N=1e3+10;

ll a[N],sum[N];

ll part[N*N];
int main(){
    //输入-------建立前缀和数组
    int n;
    cin >> n;
    for(ll i=1;i<=n;i++){
      cin >> a[i];
      sum[i]=sum[i-1]+a[i];
      
    }

    //遍历所有子区间
    ll t=0;
    for(ll i=1;i<=n;i++){
      for(ll j=i;j<=n;j++){
        part[t++]=sum[j]-sum[i-1];

      }
    }

    //排序
    sort(part,part+t);

    //找出相邻差值最小
    ll minn=1e18;
    for(ll i=1;i<t;i++){
      ll s=part[i]-part[i-1];
      minn=min(minn,s);
    }


    cout << minn;

    return 0;











}