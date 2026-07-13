#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int m = 3;

    int x = 0;
    int y = 0;

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
            continue;
        }

        

        cout << nx << ' ' << ny << '\n';
    }

    return 0;
}