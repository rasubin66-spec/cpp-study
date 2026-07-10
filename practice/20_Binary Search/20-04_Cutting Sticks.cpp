#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v(n);

    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        maxLen = max(maxLen, v[i]); // 계속해서 큰값 갱신 
    }

    // 자를 길이 후보: 1 ~ 가장 긴 막대 길이
    long long left = 1;
    long long right = maxLen;

    long long answer = 0;

    while (left <= right) {
        // 이번에는 mid 길이로 잘라보는 것
        long long mid = (left + right) / 2;

        // mid 길이로 잘랐을 때 총 몇 개 나오는지 계산
        long long count = 0;

        for (int i = 0; i < n; i++) {
            count += v[i] / mid;
        }

        // 필요한 개수 이상 만들 수 있으면
        if (count >= m) {
            // mid는 일단 가능한 답
            answer = mid;

            // 그런데 더 긴 길이도 가능할 수 있으니 오른쪽 탐색
            left = mid + 1;
        }
        else {
            // 개수가 부족하면 너무 길게 자른 것
            // 더 짧은 길이를 봐야 함
            right = mid - 1;
        }
    }

    cout << answer;

    return 0;
}