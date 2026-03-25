#include <iostream>
using namespace std;
int a[20],b[20];
void cal(char c){
    int n=c-'0';
    cout<<a[n]<<endl<<b[n];
}

int main(){
    int l=1189,w=841;
    
    for(int i=0;i<10;i++){
        if(w>l){
            int t=l;
            l=w;
            w=t;
        }
        a[i]=l;
        b[i]=w;

        l=l/2;
    }

    string s;
    cin >>s;
    cal(s[1]);
    return 0;
}