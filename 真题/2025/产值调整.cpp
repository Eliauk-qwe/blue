#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;
const int N=1e5+10;
ll a[N];
int main(){
    int T;
    cin >> T;

    for(ll i=0;i<T;i++){
        ll a,b,c,k;
        cin >> a >> b >> c >> k;
        for(ll j=0;j<k;j++){
            //
            if(a==b and b==c) break;
            
            ll a1=a,b1=b,c1=c;
            a1=static_cast<ll>(floor((b+c)/2));
            b1=static_cast<ll>(floor((a+c)/2));
            c1=static_cast<ll>(floor((b+a)/2));
            a=a1,b=b1,c=c1;

        }
        cout <<a << " " << b << " " << c << endl;

    }
    return 0;
}