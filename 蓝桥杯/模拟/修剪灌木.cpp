#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        int maxn =max((i-1)*2,(n-i)*2);
        cout << maxn << endl;
    }
    return 0;
}