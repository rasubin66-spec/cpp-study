#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int answer = 1000000000;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = abs(v[i] - v[j]); //abs는 절댓값을 나타냄 

            if (diff < answer) {
                answer = diff;
            }
        }
    }

    cout << answer;

    return 0;
}