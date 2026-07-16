#include <iostream>
using namespace std;

int n , m ;

int arr[101];
bool visited[101];

void backtrack(int depth){
    if(depth == m){
        for(int i = 0 ; i< m; i++){
            cout << arr[i] <<  ' ';
        }
        cout << endl; // 각경우의 줄바꿈을 보여줄려고  123 하고 134 이런식으로 보여줄 수 있어야 옳은 정답이 되는 구조임 
        return;
    }

    for(int i = 1; i<=n ;i++){
        if(visited[i]){ //visited[i]는 arr 안에 i가 들어있는지 직접 찾는 게 아니라, 숫자 i를 썼다고 표시해둔 체크표를 보는 것이다.
            continue;
        } // 구조가 arr[0]에서 = true로 만들면 arr[1]에서 만든것도 = true가 되니까 첫배열에서 구조를 잡으면되지

        visited[i] = true;

        arr[depth] = i;
        backtrack(depth + 1);

        visited[i] = false;
    }
}

int main(){
    cin >> n >> m;

    backtrack(0); // 함수 안에 출력이 있으니까 이거는 이렇게만 써도 되는거지

    return 0;
}

// visited[i]는 숫자 i를 이미 썼는지 체크하는 배열이다. ex>visited[1] = false면 1을 아직 사용하지 않았다에서 1을 사용했다고 바꿀수 있는거다 왜냐?? visited[101]로 배열을 만들어 둬서 저기다 관리하는 거임
// arr 안을 자동으로 검사하는 게 아니라,
// 내가 visited[i] = true/false로 직접 표시하는 것이다.