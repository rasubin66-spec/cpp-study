#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[101];
bool visited[101];

void dfs(int node){
    visited[node] = true;
    cout << node << ' ';

    for(int i  =0 ; i<graph[node].size(); i++){ //그리고 for문은 중간에 멈춰도 다시 실행되게 되어있음 예를 들어서 dfs(1)이 중간에 멈쳐도 다른 조건이 다끝나면 끝난 지점부터 계속해서 끝날때까지 돌려야함 
        int next = graph[node][i];
        if(!visited[next]){ // 이런 if문은 true 일때만 실행임 
            dfs(next);
        }
    }


}

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0 ;i< m; i++){ // 이제 여기는 내가 직접 a b값을 입력하면서 별자리를 만드는 것임 
        int a , b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1);

    return 0 ;
}