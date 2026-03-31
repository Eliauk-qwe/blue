// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

// int main() {
//     int n;
//     cin >> n;
//     vector<ll> h(n);
//     for (int i = 0; i < n; i++) cin >> h[i];
//     sort(h.begin(), h.end()); // 排序后字典序自然最小

//     // S = Ha*Hb*Hc*LCM(a,b,c) / (LCM(a,b)*LCM(a,c)*LCM(b,c))
//     // 用分子/分母比较，避免浮点误差：交叉相乘比大小
//     // bestNum/bestDen < curNum/curDen  =>  bestNum*curDen < curNum*bestDen
//     // 但数值可能很大，用 __int128

//     __int128 bestNum = -1, bestDen = 1;
//     ll ra = -1, rb = -1, rc = -1;

//     for (int i = 0; i < n; i++)
//     for (int j = i + 1; j < n; j++)
//     for (int k = j + 1; k < n; k++) {
//         ll a = h[i], b = h[j], c = h[k];
//         ll lab = lcm(a, b), lac = lcm(a, c), lbc = lcm(b, c);
//         ll labc = lcm(lab, c);

//         __int128 num = (__int128)a * b * c * labc;
//         __int128 den = (__int128)lab * lac * lbc;

//         // 比较 num/den > bestNum/bestDen
//         if (bestNum == -1 || num * bestDen > bestNum * den) {
//             bestNum = num; bestDen = den;
//             ra = a; rb = b; rc = c;
//         }
//     }

//     cout << ra << " " << rb << " " << rc << endl;
//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll a,ll b){
  return b?gcd(b,a%b) :a;
}

ll lcm (ll a,ll b){
  return a/gcd(a,b)*b;
}


int main(){
  ll n;
  cin >> n;
  vector<ll> t(n+10);

  for(ll i=1;i<=n;i++) cin >> t[i];

  sort(t.begin()+1, t.begin()+n+1);

  double minn=-1e18;
  ll la=-1,lb=-1,lc=-1;

  for(ll i=1;i<=n;i++){
    for(ll j=i+1;j<=n;j++){
      for(ll k=j+1;k<=n;k++){
        ll a=t[i],b=t[j],c=t[k];
        ll zi=a*b*c*lcm(lcm(a,b),c);
        ll mu =lcm(a,b)*lcm(a,c)*lcm(b,c);
        double res=(double)(zi/mu);
        if(res>minn){
          minn=res;
          la=a,lb=b,lc=c;
        }

      }
    }
  }

  cout << la <<" "<<lb <<" "<<lc;

}


