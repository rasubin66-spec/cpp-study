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

    int answer = -1000000000000000000000000;

    for (int i = 0;i<n;i++){
        for (int j = i + 1; j<n; j++){
            int result  = v[i] * v[j];

            if (result >= answer){
                answer = result;
            }
        }
    }

    cout  << answer <<endl;

    return 0;

}