#include <bits/stdc++.h>

using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0);

int main(){
  IOS;
  int k;
  cin >> k;
  string s;
  char c1,c2;
  cin >> s >> c1 >> c2;


  int len=s.size();
  int count=0;

  for(int i=0;i<len;i++){
    for(int j=i+3;j<len;j++){
      if(s[i] != c1)  break;
      else{
        if(s[j]==c2)  count++;
      } 
    }
  }

  cout << count;
}