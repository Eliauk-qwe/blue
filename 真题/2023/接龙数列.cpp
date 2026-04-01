#include <bits/stdc++.h>

using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
const int N=1e5+10;

ll a[N];

ll cal1(ll n){
  return n%10;
}

ll cal2(ll n){
  while(n>10){
    n=n/10;
  }
  return n;
}




int main(){
  ll n;
  cin >> n;
  ll count=0;
    int flag=1;
  
  for(ll i=1;i<=n;i++) {
    cin >> a[i];
    ll t1,t2;
    if(i>=2){
      if(flag==1){
        t1=cal1(a[i-1]);
        t2=cal2(a[i]);
      }
      if(flag==0){
        t2=cal2(a[i]);
      }

      if(t1==t2) {
          flag=1;
          continue;
        }
      
      if(t1!=t2){
        flag=0;

        if(t1==t2) {
          flag=1;
          continue;
        }
        //cout<<i << " "<< t1 << "  "<< t2<<endl;
        count++;
      }

      //cout<<i << " "<< t1 << "  "<< t2<<endl;

    }
  }
  cout << count;
  return 0;
}