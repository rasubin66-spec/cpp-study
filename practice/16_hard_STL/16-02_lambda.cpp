#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<int, int>> v;

    v.push_back({3, 90});
    v.push_back({1, 70});
    v.push_back({2, 90});
    v.push_back({4, 80});

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }

        return a.second > b.second;
    });

    for (auto p : v) {
        cout << p.first << ' ' << p.second << endl;
    }
}

//[]는 람다 밖에 있는 변수를 람다 안에서 쓸 수 있게 가져오는 공간임 
//만약에 [x] 이면 밖에 있는 x 를  가져오겠다는 거임