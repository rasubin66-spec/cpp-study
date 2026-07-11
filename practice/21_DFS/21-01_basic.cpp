//그래프는 점들과 그 점들 사이의 관계를 의미함 
//graph[1] = 1번 노드와 연결된 애들 목록
//graph[2] = 2번 노드와 연결된 애들 목록
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n , m;
    cin >> n >> m;

    vector<int> graph[101]; // graph[0] 부터 graph[100]까지 연결목록을 담을 vector 101개를 준비

    for(int i = 0 ; i < m; i++){
        int a, b;
        cin >> a >> b ;

        graph[a].push_back(b);
        graph[b].push_back(a); // 우리의 컴퓨터는 2 -> 4로 가는걸 연결한다 해도 바로 4 ->  2로 간다고 생각하지는 않는다.

    }

    for (int  i = 1 ; i <= n; i++){
        cout << i << "번과 연결된 노드:";
        for (int j = 0; j<graph[i].size(); j++){//만약에  아무것도 없으면 <0이라서 실행불가능 왜냐하면 graph[i].size가 0이 되기 때문에
            cout << graph[i][j]<< ' '; 
        }

        cout << '\n'; //즐비끔을 여기다 해서 결국에는 1번과 연결된 노드: 2 3 하고 줄바꿈 하고 2번과 연결된 노드: 3 4 줄바꿈 하고 이런식으로 출력 


    }

    return 0 ;


}