#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }

    return a.second < b.second;
}


int main(){
    vector <pair<int, int>> v;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(),v.end(),cmp);

    for(int i = 0; i<n ; i++){
        for (int j = i+1; j< n; j++){

        }
    }
}

//2. 하나를 고르면 그 시간 동안 다른 회의는 못 한다.
//3. 그러면 하나를 고를 때 뒤 공간을 최대한 남겨야 한다.
// 4. 뒤 공간을 많이 남기려면 빨리 끝나는 걸 골라야 한다.
// 5. 그래서 끝나는 시간 기준 정렬.