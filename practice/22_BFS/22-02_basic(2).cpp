#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> graph[101];
bool visited[101];
int dist[101];

void bfs(int start){
    queue<int> q;

    visited[start] = true;
    dist[start] = 0 ;
    q.push(start);

    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(int i = 0; i<graph[node].size(); i ++){
            int next = graph[node][i];
            if(!visited[next]){
                visited[next] = true;
                q.push(next);
                dist[next] = dist[node] + 1;
            }
        }
    }
}

int main(){
    int n , m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        dist[i] = -1;
    }

    for(int i = 0; i< m ; i++){
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bfs(1);
    
       
    
    for(int i = 1 ; i<=n ; i++){
        cout << i << "까지의 거리:" << dist[i] << '\n';
    }
    return 0;
}
