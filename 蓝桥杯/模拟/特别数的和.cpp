#include <iostream>
using namespace std;

int isd(int n){
    while(n>0){
        int t=n%10;
        if( t==0 || t==1 ||t==2 || t==9) return 1;
        n=n/10;
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    int sum=0;
    for(int i==1;i<=n;i++){
        if(isd(i)){
            sum+=i;
        }
    }
    cout << sum;
    return 0;
}