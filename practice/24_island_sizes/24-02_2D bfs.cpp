#include <iostream>
#include <queue>
using namespace std;

int n, m;
int arr[101][101];
bool visited[101][101];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void bfs(int x, int y){
    visited[x][y] = true;
    queue<pair<int , int>> q;
    q.push({x,y});

    while(!q.empty()){
        int curX = q.front().first;
        int curY = q.front().second;

        q.pop();

        for (int i = 0 ; i<4 ; i++){
            int nx = curX + dx[i];
            int ny = curY + dy[i];

            if(nx<0 || ny<0 || nx>=n || ny>=m){
                continue;
            }

            if(vistied[nx][ny]){
                continue;
            }

            if(arr[nx][ny] == 0){
                continue;
            }
            
            visited[nx][ny] = true;
            q.push({nx,ny});
        }
    }
}