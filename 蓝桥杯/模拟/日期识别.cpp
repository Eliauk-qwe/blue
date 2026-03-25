#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    string s;
    cin >> s;

    map<string,int> months={
         {"Jan", 1}, {"Feb", 2}, {"Mar", 3}, {"Apr", 4},
        {"May", 5}, {"Jun", 6}, {"Jul", 7}, {"Aug", 8},
        {"Sep", 9}, {"Oct", 10}, {"Nov", 11}, {"Dec", 12}
    };

    string a=s.substr(0,3);
    int b=stoi(s.substr(3,2));
    cout << months[a] <<" " <<b<< endl;
    return 0;
}