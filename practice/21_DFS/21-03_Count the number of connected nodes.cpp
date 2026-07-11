#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[101];
bool visited[101] ;
int count = -1 ;

void dfs(int node){
    visited[node] = true ;
    count ++ ;
    for(int i = 0; i<graph[node].size(); i++){
        int next = graph[node][i];
        if(!visited[next]){
            dfs(next);
        }
    }

    cout << count << endl; //그치 for 문이 끝나는 위치에 있어서 상관없는거 아닌가?? 나는 정말 햇갈리넨 ?? 아 그러네 각 길을 파해쳐 가는 도중에 끝 노드가 cout 까지 출력해버리는게 지금 문제구나 마지막 count 1개 더 출력안하는 것도 문제임
}
//dfs함수에서 막줄에 cout까지 하는건 문제지만 공부하기 위해서 남겨둠 

int main(){

    int n , m ;
    cin >> n >> m ;

    for(int i = 0 ;i< m; i++){ // 이제 여기는 내가 직접 a b값을 입력하면서 별자리를 만드는 것임 
        int a , b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1);

    return 0;

    cout << count << endl;
}