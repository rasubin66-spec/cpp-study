#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int n, m;
int arr[101][101];
bool visited[101][101];
int dist[101][101];
int min_route = 0 ;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void bfs(int x, int y){
    visited[x][y] = true;
    queue<pair<int , int>> q;
    q.push({x,y});
    dist[x][y] = 1;

    while(!q.empty()){
        int curX = q.front().first;
        int curY = q.front().second;
        
        if(curX==n-1 && curY==m-1){
            min_route = dist[curX][curY];
            break;
        }
        
        q.pop();

        for (int i = 0 ; i<4 ; i++){
            int nx = curX + dx[i];
            int ny = curY + dy[i];

            if(nx<0 || ny<0 || nx>=n || ny>=m){
                continue;
            }

            if(visited[nx][ny]){
                continue;
            }

            if(arr[nx][ny] == 0){
                continue;
            }
            
            visited[nx][ny] = true;
            dist[nx][ny] = dist[curX][curY] + 1 ;
            q.push({nx,ny}); 
        }
    }
}

int main(){
    cin >> n >> m;

    for(int i = 0 ; i<n ; i++){
        string s;
        cin >> s;
        for(int j = 0 ; j<m ; j++){
            arr[i][j] = s[j] - '0'; //이걸로 문자를 숫자로서 보게됨 
        }
        
    }

    bfs(0,0);

    cout << min_route;

    return 0;
}

//근데 덩어리 세기 할떄는 main()에다 붙이는 게 한눈에 보기 정말 편함 