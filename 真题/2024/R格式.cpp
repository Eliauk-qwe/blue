#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll qpow(ll a,ll b){
  ll res=1;

  while(b){
    if(b&1) res=res*a;
    a=a*a;
    b=b>>1;
  }

  return res;
}





int main()
{
  ll n;
  double d;
  cin >> n >> d;

  ll t=qpow(2,n);

  auto res=d*t;

  auto ans=round(res);

  cout << ans;
  
  return 0;
}