#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    int count=0,sum=0;
    while(cin >> n){
        if(n%2==0) count++;
        if(n%2==1) sum=sum+n;
    }

    cout << count << endl;
    cout << sum <<endl;

    return 0;
}
