#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

const int N=1e5+10;

ll a[N];
int main(){
    ll n;
    cin >> n;
    int cnt=0;
    for(int i=1;i<=n;i++) {
        ll x;
        cin >> x;
        if(x!=1) cnt++;
    }
    cout << cnt << endl;


    return 0;
}