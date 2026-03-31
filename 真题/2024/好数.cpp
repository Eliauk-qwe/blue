#include <iostream>
using namespace std;

typedef long long ll;

const int N=1e7+10;


int cal (ll n){
    ll i=1,j=0;
    while(n){
      int t=n%10;
      if(i==1){
        
        if((t%2) != 1)  return 0;
        else{
          j=1;
          i=0;
        }
      }
      else if(j==1){
        if((t%2)!=0)  return 0;
        else{
          j=0;
          i=1;
        }
      }
      n=n/10;

    }
    return 1;
}

int main()
{
  ll n;
  cin >> n;

  int res=0;
  for(ll i=1;i<=n;i++){
    if(cal(i)) res++;

  }

  cout << res;
  return 0;
}