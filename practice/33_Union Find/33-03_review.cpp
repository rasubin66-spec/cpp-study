#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

vector <pair <int, int>> graph[101];
int dist[101];

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0; i<m ;i++){
        int a, b, cost;
        cin >> a >> b >> cost;


        graph[a].push_back({b,cost}); //어떤 간선이라 함은 그래프를 나타낼 가능성이 높겠군
    }

    for(int i = 1; i<= n; i++){
        dist[i] = 999999;
    }

    int start ;
    cin >> start ;

    dist[start] = 0;

    priority_queue <pair<int, int>> pq;
    pq.push({0, start});

    while(!pq.empty()){
        int now = pq.top().second;
        pq.pop();

        for(int i = 0 ; i<graph[now].size();i++){
            int next = graph[now][i].first;
            int nextCost = graph[now][i].second;

            if(dist[next] < dist[now]+ nextCost){ // 그리고 내가 새로 찾은 비용이 더 클때는 무시해야하는데 이걸 왤케 햇갈리노;
                continue;
            }
            else{
                dist[next] = dist[now] + nextCost;
                pq.push({-dist[next],next}); // 왜 dist[next] 일까 우리가 하는 최소거리 갱신은 결국 최소인 거리부터 따져야 하기때문에 동일 1칸씩 전진한 놈들 중에서 가장 적게 움직인 놈들 중에서 찾는 구조가 되어야 한다
            }
        }
    }

    int INF = 999999;

    for(int i = 1; i<= n; i++){
        if(dist[i] == 999999){
            cout << "INF" << endl;
        }
        else{
            cout << dist[i] << endl;
        }
    }

    return 0;


}

// 쳇지피티 씨발롬아 