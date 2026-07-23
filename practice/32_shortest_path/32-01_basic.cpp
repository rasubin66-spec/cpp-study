#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> graph[101];
int dist[101];


int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        dist[i] = -1;
    }

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int start ;
    cin >> start;

    dist[start] = 0;
    queue<int> q;

    q.push(start);

    while(!q.empty()){
        int now = q.front();
        q.pop();

        for(int i = 0 ; i<graph[now].size(); i++){ // 배열은 .size() 라고 생각하면됨 
            int next = graph[now][i];
            if(dist[next] != -1){
                continue;
            }
            dist [next] = dist[now] + 1;
            q.push(next);
        }

    }
    for(int i = 1; i <= n; i++){
        cout << dist[i] << ' ';
    }

    return 0;
}


