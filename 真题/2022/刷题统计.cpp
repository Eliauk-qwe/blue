#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    ll a,b,n;
    cin >> a >> b >>n;
    ll num=0,day=0;
    while(num<n){
      day++;
      ll t=day%7;
      if(t>=1 || t<=5) num+=a;
      else if(t>=6 || t<=7) num+=b;

    }

    cout << day <<endl;
    return 0;
}