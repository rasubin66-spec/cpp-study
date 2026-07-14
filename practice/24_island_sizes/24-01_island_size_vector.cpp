#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
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
        string s;
        cin >> s;
        for(int j = 0 ; j<m ; j++){
            arr[i][j] = s[j] - '0'; //이걸로 문자를 숫자로서 보게됨 
        }
        
    }

    vector <int> sizes;

    for(int i =0 ; i<n ; i++){
        for(int j = 0 ; j<m ; j++){
            if(arr[i][j]==1 && !visited[i][j]){ // 여기에 해당되네 새 단지를 발견
                count = 0; // 숫자 0에서 시작 
                dfs(i,j); // count 값을 세기시작 
                sizes.push_back(count); ///넣어둠 
            }
        }
    }
    sort(sizes.begin(), sizes.end());

    cout << sizes.size() << '\n';

    for(int i = 0; i < sizes.size(); i++){
        cout << sizes[i] << '\n';
    }   

    return 0;
}