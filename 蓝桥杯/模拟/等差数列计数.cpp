#include<bits/stdc++.h>
using namespace std;
long long sum;
int main()
{
    for (int i = 1; i <= 2023; i++)//枚举首项
        for (int j = 1; i + 2 * j <= 2025; j++)//枚举公差
            sum += 2;//递增等差数列和递减等差数列是两个不同的数列
    cout << sum << endl;
    return 0;
}
