#include <iostream>
using namespace std;


int isprime(int n){
    if(n<=1) return 0;
    if(n==2)  return 1;
    if(n%2==0)  return 0;
    for(int i=3;i*i<n;i=i+2){
        if(n%i==0) return 0;
    }
    return 1;
}



int main(){
    int count=0;
    for(int i=2;count<=2025;i++){
        int res=isprime(i);
        if(res==1) count++;
        if(count == 2025){
            cout << i <<endl;
            return 0;
        }

       
        
    }
    return 0;
}