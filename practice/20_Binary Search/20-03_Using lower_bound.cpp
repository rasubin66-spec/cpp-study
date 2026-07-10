#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector <int> v(n);

    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    int m;
    cin >> m;

    vector <int> idx(m); //이런식으로 벡터라도 크기를 정해놓을 수 있다 

    for(int i = 0; i<m ; i++){
        cin >> idx[i];
    }

    for(int i = 0; i<m ; i++){
        auto it = lower_bound(v.begin(),v.end(),idx[i]);
        if(it != v.end()){
            cout << it - v.begin() << endl;
        }
        else{
            cout << -1 << endl;
        }
    }

    return 0;

}