#include <iostream>
#include <queue>
#include <string>
using namespace std;

int n, m;
int arr[101][101];
int dist[101][101]; // 이런 전역 배열은 값 선언하자마자 0으로 만들어버림 

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int bfs(int a,int b){
    queue<pair<int,int>> q;

    q.push({a,b});

    dist[a][b] = 1;

    while(!q.empty()){
        int curX = q.front().first;
        int curY= q.front().second;

        q.pop();

        for(int i = 0; i<4; i++){
            int nx = curX + dx[i];
            int ny = curY + dy[i];

            if(nx<0 || ny<0 || nx >= n || ny>=m){
                continue;
            }

            if(arr[nx][ny]==0){
                continue;
            }

            if(dist[nx][ny]!=0){ //이게 왜 필요 하냐면 1. 계속 왓던길을 q에 넣으면서 계속 q가 커지고 dist[왔던 길 ][왔던 길] 에  거리값을 1씩 추가해버려서 나중에 뜬금없는 수가 나와버림 
                continue;
            }

            q.push({nx,ny});

            dist[nx][ny] = dist[curX][curY] + 1;

            if(nx == n-1 && ny == m-1){
                return dist[nx][ny] ;
            } // 어차피 이구조는 한칸 앞으로만 가는 구조이기에 모든 노드에서 한칸 앞으로 가서 먼저도착하는 놈이 최단거리가 될수 밖에 없는 구조임 
        }
    }
    return 0; //어차피 정답은 저기 위에서 출력될거기에 이렇게만 해놓음 
}

int main(){

    cin >> n >> m;

    for(int i = 0; i < n ; i++){
        string s;
        cin >> s;
        for(int j = 0; j<m ; j++){
            arr[i][j] = s[j] - '0';
        }
    }

    cout << bfs(0,0);

    return 0;
}
