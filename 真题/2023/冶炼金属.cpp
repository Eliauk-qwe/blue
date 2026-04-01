#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N=1e4+10;
ll a[N][N];
int main()
{
  ll n;

  
  cin >> n;
  for(ll i=1;i<=n;i++){
    for(ll j=1;j<=2;j++){
      cin >> a[i][j];
      
    }


  }



  static ll maxn=a[1][1]/a[1][2];
  static ll minn=a[1][1]/(a[1][2]+1);


  for(ll i=1;i<=n;i++){
    ll t1=a[i][1]/a[i][2];
    ll t2=a[i][1]/(a[i][2]+1);
    maxn=min(t1,maxn);
    minn=max(t2+1,minn);

  }



  cout << minn << " "<<maxn;
  
  return 0;
}