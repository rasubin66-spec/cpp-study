#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge{ // 구조체를 이렇게 만들었꼬
    int a;
    int b;
    int cost;
};

int parent[101];

bool cmp(Edge x, Edge y){
    return x.cost < y.cost;
}

int findparent(int x){
    if(parent[x] == x){
        return x;
    }

    return parent[x] = findparent(parent[x]);
}

void unionfindparent(int a, int b){
    int rootA = findparent(a);
    int rootB = findparent(b);

    if(rootA != rootB){
        parent[rootB] = rootA;
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 1; i<= n ; i++){
        parent[i] = i;
    }

    vector<Edge> Edges; //여기서도 edge 타입으로 한 배열이기에 이름 그대로 꺼내야함 pair일때는 first second 이렇게 써도 되지만 

    for(int i = 0; i<m ;i++){
        int a , b, cost;
        cin >> a >> b >> cost;
        Edges.push_back({a, b, cost});
    }

    sort(Edges.begin(), Edges.end(), cmp);

    int count = 0;
    int answer = 0;

    for(int i = 0; i<Edges.size(); i++){
        int a = Edges[i].a;
        int b = Edges[i].b;
        int cost = Edges[i].cost;

        if(findparent(a) != findparent(b)){
            unionfindparent(a, b);
            answer += cost ;
            count ++ ;

            if(count == n-1){
                break;
            }
        }
    }

    cout << answer;

    return 0;
}

// MST = 모든 정점을 연결하되, 총 비용이 최소가 되게 간선을 고르는 것





