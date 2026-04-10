#include <bits/stdc++.h>
using namespace std;


int cal(long long n){
  if(n==2)  return 1;
  if(n%2==0) return 0;
  for(long long i=3;i<=sqrt(n);i=i+2){
    if(n%i==0)  return 0;
  }
  return 1;
}
int main()
{
  int count=0;
  long long i=2;
  while(count <3){
    if(cal(i)) count++;
    if(count==2){
      cout<< i;
      return 0;
    }
    i++;


  }
  return 0;
}