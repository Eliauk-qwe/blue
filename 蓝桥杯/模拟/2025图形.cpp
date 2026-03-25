#include <iostream>
using namespace std;

int main(){
    int h,w;
    cin >> h>>w;
    string s="2025";
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout << s[(i+j)%4];
        }
        cout << endl;
    }
    return 0;
}