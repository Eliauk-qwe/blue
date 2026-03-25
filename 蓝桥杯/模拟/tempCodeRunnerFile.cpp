#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int w,m,n;
    cin >> w >> m >> n;

    int h1=m/6,h2=n/6;
    int w1,w2;
    int num=0;
    num=num+abs(h1-h2);

    if(h1%2==1){
        w1=6-m%6+1;
    }else{
        w1=m%6;
    }
    if(h2%2==1){
        w2=6-n%6+1;
    }else{
        w2=n%6;
    }


    num=num+abs(w1-w2);
    cout << num;
    return 0;
}