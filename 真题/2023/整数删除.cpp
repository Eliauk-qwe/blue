#include <bits/stdc++.h>

using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0);


typedef long long ll;
const int N=5e5+10;


deque<ll> a(N);


int main(){
  ll n,k;
  cin >>n >> k;
  for(ll i=0;i<n;i++)  cin >> a[i];


  sort(a.begin(),a.end());

  for(int i=1;i<=k;i++){
    if(a.size()==1) continue;
    a[1]+=a[0];
    a.pop_front();
  }


  ll len=a.size();

  for(int i=0;i<len;i++){
    cout << a[i] << " ";
  }

}