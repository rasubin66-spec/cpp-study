#include <iostream>
using namespace std;

int main(){
    int x = 2;
    int y = 2;

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    for(int i = 0; i<4 ; i++){
        int nx = x +dx[i];
        int ny = y +dy[i];

        cout << nx << ' ' << ny << '\n';
    }

    return 0;
}

//결국 동서남북에서 어디든 갈수 있게 하는 배열