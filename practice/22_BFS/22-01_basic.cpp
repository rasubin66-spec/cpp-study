#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> graph[101];
bool visited[101];

void bfs(int start){
    queue <int> q;

    visited[start] = true;
    q.push(start); // 먼갈 넣어놨는데 빌 수가 없구난 생가해보니까 

    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(int i = 0; i<graph[node].size(); i ++){
            int next = graph[node][i];
            
            if (!visited[next]){

                visited[next] = true;
                q.push(next);
            }
        }

    }
}

int main(){
    int m , n;
    cin >> m >> n;

    for(int i = 0 ;i < m ; i++){
        int a , b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);

    }

    bfs(1);

    return 0;
}