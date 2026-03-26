#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>  b(n+10);
    for(int i=1;i<=n;i++) cin >> b[i];

    
    int res=0;
    for(int i=1;i<=n;i++){
        vector<int> a=b;
        int pos=i;
        int sum=0;
        int cnt=1;

        while(1){
            if(cnt>a.size()-1) break;
            if(a[pos]==cnt){
                sum+=a[pos];
                a.erase(a.begin() + pos);
                cnt=1;
            if(pos>a.size()-1) pos=1;
                if(a.size()==1) break;

               
            }else{
                cnt++;
                pos++;
            if(pos>a.size()-1) pos=1;

            }
        }

        res=max(res,sum);
        

    }
    cout << res << endl;
    
    return 0;
}