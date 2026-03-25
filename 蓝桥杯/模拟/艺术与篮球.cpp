// #include <iostream>
// using namespace std;


// int a[80];
// int count=0;
// int main(){
//     a[0]=13,a[1]=1,a[2]=2,a[3]=3,a[4]=5,a[5]=4,a[6]=4,a[7]=2,a[8]=2,a[9]=2;
//     int year,month,day;
//     for(int year=2000;year<=2028;year++){
//         for(int month=1;month<=12;month++){
//             for(int day=1;day<=31;day++){
//                 if(month == 1 || month == 3 || month == 5 || month == 7 ||
//                 month == 8 || month == 10 || month == 12){
//                     if (day>31) break;
//                 }else if(month == 4 || month == 6 || month == 9 || month == 11){
//                     if (day>30) break;
//                 }else if(month == 2){
//                     if(year%400==0||(year%4==0&&year%100!=0)){
//                         if(day>29) break;
//                     }else{
//                         if(day>28) break;
//                     }
//                 }

//                 int sum=0;
//                 //string s=to_string(year)+to_string(month)+to_string(day);
//                 // 需要补零到2位
//                 // string s = to_string(year) + 
//                 //         (month < 10 ? "0" + to_string(month) : to_string(month)) +
//                 //         (day < 10 ? "0" + to_string(day) : to_string(day));
//                 char buffer[9];
// // sprintf(buffer, "%04d%02d%02d", year, month, day);
// string s = buffer;
//                 for(auto x:s){
//                     sum+=a[x-'0'];
//                 }
//                 if(sum>50) count++;

//                 if(year==2024 && month ==4 && day==13) {
//                     cout << count;
//                     return 0;
//                 }


//             }
//         }
//     }

    
//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;

int a[10] = {13, 1, 2, 3, 5, 4, 4, 2, 2, 2};
int ans = 0;

int main() {
    for(int year = 2000; year <= 2024; year++) {
        for(int month = 1; month <= 12; month++) {
            for(int day = 1; day <= 31; day++) {
                // 日期合法性检查
                if(month == 2) {
                    bool isLeap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
                    if(isLeap) { if(day > 29) break; }
                    else { if(day > 28) break; }
                } else if(month == 4 || month == 6 || month == 9 || month == 11) {
                    if(day > 30) break;
                } else {
                    if(day > 31) break;
                }
                
                // 正确补零，生成8位日期字符串
                string s = to_string(year);
                if(month < 10) s += "0" + to_string(month);
                else s += to_string(month);
                if(day < 10) s += "0" + to_string(day);
                else s += to_string(day);
                
                int sum = 0;
                for(char x : s) {
                    sum += a[x - '0'];
                }
                if(sum > 50) ans++;
                
                if(year == 2024 && month == 4 && day == 13) {
                    cout << ans << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}