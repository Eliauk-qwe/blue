#include <bits/stdc++.h>

using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0);

const int N=15;

int qipan[N][N];
int flag[N][N];
int edge[N][N][N][N];
int n,k;
string path;


int dx[8]={0,1,1,1,0,-1,-1,-1};
int dy[8]={1,1,0,-1,-1,-1,0,1};



int dfs(int a,int b){
  //递归结束
  if(a==n && b==n)   return path.size() == n*n-1;

  //开始！
  flag[a][b]=true;
  for(int i=0;i<8;i++){
    int x=a+dx[i],y=b+dy[i];
    if(x<1 || x>n || y<1 || y>n) continue;
    if(flag[x][y])  continue;
    if(qipan[x][y] != (qipan[a][b]+1)%k) continue;
    if((i%2) &&(edge[a][b][x][y] || edge[x][a][y][b]))  continue;

    edge[a][b][x][y]=1;
    path=i+'0';
    if(dfs(x,y))   return true;
    path.pop_back();
    edge[a][b][x][y]=0;
  }
  flag[a][b]=false;

  return  false;



}




int main()
{
  cin >> n >> k;


  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin >> qipan[i][j];
    }
  }


  int f=dfs(0,0);
  if(!f){
    cout << -1 <<endl;
  }else{
    cout<< path <<endl;
  }


  
  return 0;
}