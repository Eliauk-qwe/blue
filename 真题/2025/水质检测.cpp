#include <bits/stdc++.h>

using namespace std;


typedef long long ll;

const int N=1e6;



int main(){
   
    string s1,s2;
    cin>>s1>>s2;
    int len=s1.length();

     if (len < 2) {  // 长度不足2时无法处理，直接输出0或特殊处理
        cout << 0 << endl;
        return 0;
    }

    ll cnt=0;
    int flag=0;
    int  r=0;

    for (int i = 0; i < len; i++)
    {
        if (s1[i] == '#' || s2[i] == '#')
        {
            
            r = max(r, i);
        }
    }

    for(int i=0;i<r;i++){
        if(flag==0 && s1[i]=='.' && s2[i]=='.') continue;
        if( s1[i]=='#' && s2[i]=='#') {
            flag=1;
            if(s1[i+1]=='#' && s2[i+1]=='#') continue;
            if(s1[i+1]=='#' || s2[i+1]=='#') continue;
            if(s1[i+1]=='.' && s2[i+1]=='.') {
                auto pos1=s1.find('#',i+1);
                auto pos2=s2.find('#', i+1);

                if(pos1 ==string::npos && pos2==string::npos) break;
                else{
                    cnt++;
                    if(pos1==string::npos || pos2<=pos1) s2[i+1]='#';
                    if(pos2==string::npos || pos2>pos1) s1[i+1]='#';

                }
            }

        }
       
        
        if( s1[i]=='.' && s2[i]=='#') {
            flag=1;
            if(s2[i+1]=='.') {
                s2[i+1]='#';
                cnt++;
                
            } 

        }
        if( s1[i]=='#' && s2[i]=='.') {
            flag=1;
            if(s1[i+1]=='.') {
                s1[i+1]='#';
                cnt++;
                
            } 

        }



    }

    cout <<cnt<<endl;

    return 0;
}