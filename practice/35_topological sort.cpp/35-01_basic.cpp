#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector <int> graph[101];
int indegree[101];

int main(){ //n하고 m값 입력
    int n, m;
    cin >> n >> m;

    for(int i = 0; i<m ; i++){ // a 와 b를 입력받고 연결한다음에 뒤에 마지막 b를 할려면 어떤일을 몇번해야한느지를 알려주는게 indegree
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        indegree[b]++;  
    } // 이러면 결국 우리는 노드중 선이수해야하는 것이 0부터 실행해야하는 것임 

    queue<int> q;

    for(int i = 1; i<=n; i++){
        if(indegree[i] == 0){ // 이 조건인 것만 큐에 넣고 지금 당장 할 수 있다 queue에 넣는다는 감각을 실행함 
            q.push(i);
        }
    }

    vector<int> result ;

    while(!q.empty()){
        int now = q.front();
        q.pop();

        // cout << now << ' ' //백준 줄 세우기 같은 문제는 보통 이 출력이 필요해.
        result.push_back(now);

        for(int i = 0; i<graph[now].size() ; i++){
            int next = graph[now][i];

            indegree[next]--; // 여기서 만약에 더 이수해야하는 놈들이 남아있으면 -- 했을떄 0이 나오므로 또다시 하래 q에다 넣는게 가능해짐 

            if(indegree[next] == 0){ // 결국 방금 줄어든 next만 확인하면서 선이수가 0이 되었으면 노드에 넣음 
                q.push(next);
            }
        }
    }

    if(result.size() != n){
        cout << "cycle" << ' ';
    }
    else(
        for(int i = 0; i<result.size(); i++){
            cout << result[i]<<' ';
        }
    )

    return 0;
}

//indegree가 0이다
//= 지금 당장 할 수 있다
//= queue에 넣는다
//각 노드는 한 번 처리
//각 간선도 한 번 확인