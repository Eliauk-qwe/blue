#include <iostream>
using namespace std;

int main(){
    int cnt=0;
    for(int i=0;i<=255;i++){
        for(int j=0;j<=255;j++){
            for(int k=0;k<=255;k++){
                if(k>i && k>j){
                    cnt++;
                }

            }
        }
    }
    cout<< cnt;
    
    return 0;
}