#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

char board[12][12];
int dist[12][12];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
queue<pair<int, int>> q;
int main() {
    // 여기에 코드를 작성해주세요.
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            dist[i][j]=-1;
            cin>>board[i][j];
            if(board[i][j]=='L') {
                q.push({i, j});
                dist[i][j]=0;
            }
        }
    }
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        if(board[x][y]=='B'){
            cout<<dist[x][y]-1<<"\n";
            break;
        }
        q.pop();
        
        for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx<0 || nx>=10 || ny<0 || ny>=10) continue;
            if(board[nx][ny]=='R') continue;
            if(dist[nx][ny]==-1){
                dist[nx][ny]=dist[x][y]+1;
                q.push({nx, ny});
            }

        }

    }

    return 0;
}