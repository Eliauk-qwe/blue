#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int w,m,n;
    cin >> w >> m >> n;

    int h1=m/w,h2=n/w;
    if(m%w==0) h1--;
    if(n%w==0) h2--;
    int w1,w2;
    int num=0;
    num=num+abs(h1-h2);

    if(h1%2==1){
        w1=w-m%w+1;
    }else{
        w1=m%w;
    }
    if(h2%2==1){
        w2=w-n%w+1;
    }else{
        w2=n%w;
    }


    num=num+abs(w1-w2);
    cout << num;
    return 0;
}


