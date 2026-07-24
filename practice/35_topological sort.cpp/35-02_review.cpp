#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> graph[101];
int indegree[101];

int main(){
    int n, m;
    cin >> n >> m;

    for(int i =0 ;i<m; i++){
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b); // 여기에서 1이상의 숫자만 들어오겠금 되있잖아
        indegree[b]++; // 여기 선이행수잖아 착각하지말자

    }

    queue<int> q;

    for(int i = 1; i<=n; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    vector<int> result;

    while(!q.empty()){
        int now = q.front();
        q.pop();
        result.push_back(now);

        for(int i = 0; i<graph[now].size(); i++){
            int next = graph[now][i];
            indegree[next] --;

            if(indegree[next] == 0){
                q.push(next);
            }
        }
    }

    for(int i = 0; i<result.size(); i++){
        cout << result[i]<<' ';
    }

    return 0;
}