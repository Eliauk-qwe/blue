#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll N=1e5+10,MOD=1e9+7;
ll a[N]; // 全局，避免栈溢出

// 快速幂
ll qpow(ll a,ll b ,ll MOD){
    ll res=1; // 初始值必须是1

    a%=MOD;

    while(b){
        // b&1  通过按位与， 0001,来判断 二进制 最低位 是不是1
        if(b&1) res=res*a %MOD;
        a=a*a%MOD;
        b=b>>1;
    }

    return res;

}

int main(){
    ll n;
    cin >> n;

    for(ll i=1;i<=n;i++) cin >> a[i];

    ll sum=0,res=0;
    for(ll i=1;i<=n;i++){
        sum^=a[i]; // 前缀异或，不是前缀和
        if(n-i>0) res=(res+sum%MOD*2%MOD*qpow(3,n-i-1,MOD))%MOD;
        else res=(res+sum)%MOD;
    }
    cout << res;

    return 0;
}