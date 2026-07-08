#include <iostream>
#include <vector>
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

    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (v[i] + v[j] + v[k] == 10) {  //여기보면 숫자가 너무 커지면 위험함 
                    found = true;
                }
            }
        }
    }

    if (found) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}