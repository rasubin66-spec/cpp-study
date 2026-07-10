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
    
    int n;
    cin >> n;

    vector <pair<int, int>> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(),v.end(),cmp);

    int count = 0;
    int lastend = 0;

    for(int i = 0 ; i< n; i++){
        int start = v[i].first;
        int end = v[i].second;
        if(start>= lastend){
            lastend = end;
            count ++;
        }
    }

    cout << count;

    return 0;


}

//2. 하나를 고르면 그 시간 동안 다른 회의는 못 한다.
//3. 그러면 하나를 고를 때 뒤 공간을 최대한 남겨야 한다.
// 4. 뒤 공간을 많이 남기려면 빨리 끝나는 걸 골라야 한다.
// 5. 그래서 끝나는 시간 기준 정렬.
// 끝나는 시간끼리 비교하면 내가 어떤거를 대체해도 그게 나중에 그게 갯수에 영향을 미치지 않게 됨..
// 끝나는 시간이 짧아지면 뒤에 붙을 시간이 점점 많아지므로 갯수도 올라갈 수 밖에 없다.