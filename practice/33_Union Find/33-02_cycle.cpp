#include <iostream>
using namespace std;

int parent[101];

int findparent(int x){
    if(parent[x] == x){
        return x;
    }

    return parent[x] = findparent(parent[x]);
}

void union_find(int a, int b){
    int rootA = findparent(a);
    int rootB = findparent(b);

    if(rootA!= rootB){
        parent[rootB] = rootA;
    }
}



int main(){
    int n , m;
    cin >> n >> m ;

    for(int i =1 ;i<=n ;i++){
        parent[i] = i;
    }

    bool cycle = false;

    for(int i = 0; i< m ; i++){
        int a , b;
        cin >> a >> b;
        if(findparent(a) == findparent(b)){
            cycle = true ;
            break;
        }
        else{
            union_find(a,b);
        }
    }

    if(cycle){
        cout << "사이클 있음 " <<endl;
    }
    else{
        cout  << "사이클 없음" << endl;
    }

    return 0;
}
//같은 간선이 중복으로 들어오지 않는다.
//자기 자신으로 가는 간선도 없다.