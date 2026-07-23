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
    int n, m;
    cin >> n >> m;

    for(int i =1 ;i<=n ;i++){
        parent[i] = i;
    }

    for(int i = 0 ; i<m ; i++){
        int type ,a ,b;
        cin >> type >> a >> b;

        if(type==0){
            union_find(a,b);
        }

        else if(type == 1){
            if(findparent(a) == findparent(b)){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}