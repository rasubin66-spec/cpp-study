#include <iostream>
using namespace std;

int arr[101][101];

int main() {
    int n, m;
    cin >> n >> m;

    // 2차원 배열 입력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int x, y;
    cin >> x >> y; // 현재 위치 입력

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        // 1. 배열 밖이면 무시
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
            continue;
        }

        // 2. 값이 0이면 못 가는 칸이므로 무시
        if (arr[nx][ny] == 0) {
            continue;
        }

        // 여기까지 왔다는 건 갈 수 있는 칸이라는 뜻
        cout << nx << ' ' << ny << '\n';
    }

    return 0;
}