#include <iostream>
using namespace std;

int isd(long long n){
    string s;
    int flag2=0,flag0=0,flag22=0;
    while(n>0){
        int t=n%10;
        if(t==3){
            flag2=1;
        }
        if(flag2==1 && t==2){
            flag0=1;
        }
        if(flag0==1 && t==0){
            flag22=1;
        }

        if(flag22==1 && t==2){
            return 1;
        }
        n=n/10;
    }
    return 0;
}


int main(){
    int cnt=0;
    for(long long  i=12345678 ;i<=98765432;i++){
        if(isd(i)){
            cnt++;
        }
    }
    int total = 98765432 - 12345678 + 1;
    cout <<total-cnt;
    
    return 0;
}




