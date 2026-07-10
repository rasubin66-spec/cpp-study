#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end()); // 이분탐색은 정렬되어있을때 사용가능 

    int left = 0 ;
    int right = n-1;
    bool found = false;

    while(left<= right){
        int mid = (left+right)/2;

        if(v[mid] == target){
            found = true;
            break;
        }
        else if(v[mid] < target){
            left = mid+1;
        }
        else{
            right = mid - 1 ;
        }

    }

    cout << found;

    return 0 ;

}
    //결국 이분탐색은 중간을 보고 찾고자하는 값보다 중간이 작으면 중간의 오른쪽을 보고 크면 중간의 왼쪾을 보면서 값을 찾을떄 까지 찾아 나가는 과정임 