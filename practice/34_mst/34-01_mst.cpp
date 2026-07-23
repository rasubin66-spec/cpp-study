#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 싼 간선부터 보고,
// 사이클이 안 생기면 고른다.
// 사이클이 생기면 버린다.

struct Edge{
    int a;
    int b;
    int cost;
};

int parent[101];

bool cmp(Edge x, Edge y){
    return x.cost < y.cost ; // 괄호방향이 왼쪽이 작기에 작은것부터 나열함 
}

int findParent(int x){
    if(parent[x] == x){
        return x;
    }

    return parent[x] = findParent(parent[x]);
}

void unionParent(int a, int b){
    int rootA = findParent(a);
    int rootB = findParent(b);

    if(rootA != rootB){
        parent[rootB] = rootA;
    }
}

int main(){
    int n , m;
    cin >> n >> m;

    vector<Edge> Edges;

    for(int i = 1; i<=n ; i++){ // 처음에는 자기 자신을 부모로 정해두는 것이 좋음 개인 플 이니까 
        parent[i] = i;
    }

    for(int i = 0; i<m ;i++){  // 여기는 연결 가능한 간선의 명단을 적어 놓은 곳임 
        int a, b ,cost;
        cin >> a >> b >> cost;

        Edges.push_back({a,b,cost});
    }

    sort(Edges.begin(), Edges.end() , cmp);

    int answer = 0;
    int selected = 0;

    for(int i = 0; i<Edges.size() ; i++){ // 실제 MST에 포함시킬지 말지 판단하려고 
        int a =  Edges[i].a;
        int b =  Edges[i].b;
        int cost =  Edges[i].cost;

        if(findParent(a) != findParent(b)){ // 왜냐하면 이미 간접적으로 연결되어 있는 간선이면 한번 더 연결하면 사이클이 되어버리기에 적합하지 않음 
            unionParent(a, b);
            answer += cost;
            selected ++ ;

            if(selected == n-1){
                break;
            }
        }
    }

    cout << answer ;



    return 0;
}
// 연결 가능한 그래프에서 사이클 없이 간선을 n-1개를 골랐다는 건 모든 노드가 하나의 덩어리로 연결됐다는 뜻이다.

// 간선은 아직 같은 팀이 아닌 두 정점을 연결하는 간선 = 사이클이 안 생기는 간선
// 을 의미해서 결국에는 모두 간선을 연결 할 수 잇으면 정점이 n개 라는 가정하게 간선개수는 n-1개만 있으면 충분하다.