#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
typedef long long ll;

int main(){
    ll n,m;
    cin >> n >>m;
    vector<ll> a(n+1);
   
    for(ll i=1;i<=n;i++)  cin >>a[i];

    sort(a.begin(),a.end());
    long long res=1e18;
    ll l=1,r=m;

    for(ll i=1;(i+m-1)<=n;i++){
        long long t=a[r]*a[r]-a[l]*a[l];
        res=min(res,t);
        l++,r++;

    }
    cout << res << endl;

    
    return 0;
}