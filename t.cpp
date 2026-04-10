#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    int a[] = {
5,6,8,6,9,1,6,1,2,4,9,1,9,8,2,3,6,4,7,7,
5,9,5,0,3,8,7,5,8,1,5,8,6,1,8,3,0,3,7,9,
2,7,0,5,8,8,5,7,0,9,9,1,9,4,4,6,8,6,3,3,
8,5,1,6,3,4,6,7,0,7,8,2,7,6,8,9,5,6,5,6,
1,4,0,1,0,0,9,4,8,0,9,1,2,8,5,0,2,5,3,3
    };
    
    vector<int> s(a, a + 100);
    unordered_set<string> ans;

    // 8 层循环暴力枚举
    for (int i1 = 0; i1 < 100; i1++)
    for (int i2 = i1+1; i2 < 100; i2++)
    for (int i3 = i2+1; i3 < 100; i3++)
    for (int i4 = i3+1; i4 < 100; i4++)
    for (int i5 = i4+1; i5 < 100; i5++)
    for (int i6 = i5+1; i6 < 100; i6++)
    for (int i7 = i6+1; i7 < 100; i7++)
    for (int i8 = i7+1; i8 < 100; i8++)
    {
        if (s[i1]!=2 || s[i2]!=0 || s[i3]!=2 || s[i4]!=3) 
            continue;

        int m1 = s[i5], m2 = s[i6];
        int d1 = s[i7], d2 = s[i8];
        int mm = m1*10 + m2;
        int dd = d1*10 + d2;

        string date = "2023" + to_string(m1) + to_string(m2) + to_string(d1) + to_string(d2);

        bool ok = false;
        if (mm == 1 && dd >=1 && dd <=31) ok=1;
        if (mm == 2 && dd >=1 && dd <=28) ok=1;
        if (mm == 3 && dd >=1 && dd <=31) ok=1;
        if (mm == 4 && dd >=1 && dd <=30) ok=1;
        if (mm == 5 && dd >=1 && dd <=31) ok=1;
        if (mm == 6 && dd >=1 && dd <=30) ok=1;
        if (mm == 7 && dd >=1 && dd <=31) ok=1;
        if (mm == 8 && dd >=1 && dd <=31) ok=1;
        if (mm == 9 && dd >=1 && dd <=30) ok=1;
        if (mm ==10 && dd >=1 && dd <=31) ok=1;
        if (mm ==11 && dd >=1 && dd <=30) ok=1;
        if (mm ==12 && dd >=1 && dd <=31) ok=1;

        if (ok) ans.insert(date);
    }

    cout << "答案：" << ans.size() << endl;
    return 0;
}