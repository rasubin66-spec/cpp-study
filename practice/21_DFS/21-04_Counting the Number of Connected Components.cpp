#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[101];
bool visited[101] ;
int answer = 0;

void dfs(int node){
    visited[node] = true;
    for(int i = 0; i<graph[node].size(); i++){
        int next = graph[node][i];
        if(!visited[next]){
            dfs(next);
        }
    }

} // 이 집단은 노드들이 지나다니면서 false -> true로 바꿔주는 역할을 하고 있음 ;

int main(){
    int n , m;
    cin >> n >> m; // m은 노드끼리 연결된 경로 갯수를 의미한다.

    for(int i = 0 ; i<m ; i++){
        int a , b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i =1; i<=n ; i++){
        if(!visited[i]){
            dfs(i);
            answer++;
        }
    }

    cout <<  answer;
   

}
//visited는 “이미 지나간 길 표시”이고, false로 남아 있는 노드는 아직 어떤 덩어리에서도 방문되지 않았다는 뜻이라서 거기서 새 DFS를 시작한다.