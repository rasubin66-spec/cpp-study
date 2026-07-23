#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<pair<int, int>> graph[101];
int dist[101];

int main(){
    int n ,m ;
    cin >> n >> m;

    for(int i = 0; i<=n ; i++){
        dist[i] = 999999;
    }

    for(int i = 0 ; i<m ; i++){
        int a , b, cost;
        cin >> a >> b >> cost;

        graph[a].push_back({b,cost}); // 이거는 지금 단방향이여서 만약에 양방향이라고 가정하면 graph[b].push_back({a, cost}); 이것도 추가해야 옳은 정답이 되는거임
    }

    int start ;
    cin >> start;

    priority_queue<pair<int,int>>pq;

    dist[start] = 0; // 내가 도착한 a (dist[a]) 까지의 누적비용을 기록하겠다

    pq.push({0, start});

    while(!pq.empty()){ // 우리의 프리오리티 큐는 가장 높은 값을 빼기에 -를 붙여서 꼼수를 부림 
        int nowCost = -pq.top().first;// 비용
        int now = pq.top().second; //여기 현재위치
        pq.pop(); // 그리고 뱨는 시나리오가 같음 

        if(dist[now]<nowCost){ // 최소거리 비용 위주로 보는거라 
            continue;
        }

        for(int i = 0; i<graph[now].size() ; i++){
            int next = graph[now][i].first;

            if(dist[next] > dist[now]+ graph[now][i].second ){ // 
                dist[next] = dist[now]+ graph[now][i].second ;
                pq.push({-dist[next],next});
            }
            
        }
    }
    int INF = 999999;

    for(int i = 1 ; i<=n ; i++){
        if(dist[i] == 999999){
            cout << "INF" << endl ;
        }
        else{
            cout << dist[i] << ' ';
        }
    }

    return 0;
}
// 현재 발견된 정점들 중에서 가장 짧은 얘들부터 확정해서 나간다.