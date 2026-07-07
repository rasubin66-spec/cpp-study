#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 3, 5, 5, 5, 7, 9};

    auto it = upper_bound(v.begin(), v.end(), 5);

    cout << *it << '\n';
}

//upper_bound는 초과 lower_bound는 이상 이 있는 위치 