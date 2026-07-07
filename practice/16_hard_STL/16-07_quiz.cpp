#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> v ;
    int n;
    cin >> n;

    for (int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int m;
    cin >> m;

    for (int i = 0 ; i < m ; i ++){

        int x;
        cin >> x;

        auto a = lower_bound(v.begin(), v.end(), x);
        auto b = upper_bound(v.begin(), v.end(), x);
        bool found = binary_search(v.begin(), v.end(), x);

        if (found == false){
            cout << "0" << endl;
        }
        else{
            cout << b - a << endl;
        }
    }

    return 0;

}

// 근데 이것보다는 그냥 a하고 b를 저장해버려도 됨 왜냐하면 만약에 x가 배열에 없다고 하면 코드 상 b-a하면 자동으로 0을 반환해주기 떄문이다 
// 왜냐하면 _lower_bound는 x이상중 첫번째의 위치를 말하는 거고 upper_bound는 x초과중 첫번쨰 위치를 말하는 거고 

// for (int j= 0; j < n ; j++){
//             if (x == v[j]){
//                 auto a = lower_bound(v.begin(), v.end(), x);
//                 auto b = upper_bound(v.begin(), v.end(), x);
//                 cout << b-a <<endl;
//             }
//             else{
//                 cout << "0" <<endl;
//             }
// 이렇게 써버리면 들어온 x 값당 계속해서 배열을 순서대로 돌기떄문에 완전히 틀린거임 

// 여기서 M은 질문이 5개 들어온다는거임 