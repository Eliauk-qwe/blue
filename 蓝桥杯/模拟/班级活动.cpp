#include <iostream>
#include <map>
using namespace std;
const int N=1e5+10;

int a[N];
int main(){
    int n;
    map<int,int> mp;

    cin >> n;
    int count=0;

    for(int i=1;i<=n;i++) {
        int x;
        cin >> x;
        mp[x]++;
    }

    

    //有且仅有另一名同学 j 的 id 与其相同
    int one=0;
    int exp=0;


    for(auto &[id,cnt] : mp){
        if(cnt==1) one++;
        else if(cnt>=3) {
            exp+=cnt-2;
        }
    }

    int ans;
    if (one>= exp) {
        ans = exp + (one - exp) / 2;
    } else {
        ans = exp;
    }
    
    cout << ans << endl;

    return 0;
}