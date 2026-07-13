#include <iostream>
#include <vector>
#include <queue>
using namespace std;


vector<int> graph[101];
bool visited[101];
int count = 0;


void bfs(int start){
    visited[start] = true;
    
    queue<int> q;
    q.push(start);

    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(int i = 0; i<graph[node].size(); i++){
            int next = graph[node][i];
            if(!visited[next]){
                visited[next] = true;
                count++;
                q.push(next);
            }
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0 ;i < m ; i++){
        int a , b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);

    }

    bfs(1);

    cout << count;

    return 0;
}