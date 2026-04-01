#include <bits/stdc++.h>

using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;

int main(){
  int T;
  cin >> T;
  IOS;

  for(int i=1;i<=T;i++){
    int n;
    cin >> n;
    int flag=1;
    for(int j=1;j<=n;j++){
      ll f;
      
      long long t,d,l;
      cin >> t >> d>>l;
      ll t1=t+d,t2=t+l;
      if(j!=1 && t2> f) {
        flag=0;
        break;
      }


      f=t1;
     
      

      

    }

    if(flag==0)  cout << "NO"<<endl;
      else cout <<"YES"<<endl;


  }

  return 0;

}