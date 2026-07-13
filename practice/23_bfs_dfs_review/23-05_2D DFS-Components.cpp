#include <iostream>
using namespace std;

int n ,m;
int arr[101][101];
bool visited[101][101];
int count = 0;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void dfs (int x, int y){
    count ++ ; // 시작하자 마자 바로 한번 실행해야해 
    visited[x][y] = true;

    for(int i =0 ;i < 4 ; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || nx >= n || ny < 0 || ny >= m){
            continue;
        }

        if(arr[nx][ny] == 0){
            continue;
        }

        if(visited[nx][ny]){
            continue;
        }
        
        dfs(nx,ny);
        
    }
    
}

int main(){
    cin >> n >> m;

    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<m ; j++){
            cin >> arr[i][j];
        }
    }

    for(int i =0 ; i<n ; i++){
        for(int j = 0 ; j<m ; j++){
            if(arr[i][j]==1 && !visited[i][j]){
                dfs(i,j);
                cout << count << endl;
                count = 0;

            }
        }
    }
    
}