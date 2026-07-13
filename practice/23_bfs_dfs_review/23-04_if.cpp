#include <iostream>
using namespace std;

int arr[101][101];

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0 ; i < n ; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int x,y;
    cin >> x >> y;

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
            continue;
        }

        if (arr[nx][ny] == 0) {
            continue;
        }

        cout << nx << ' ' << ny << '\n';
    }

    return 0;
}