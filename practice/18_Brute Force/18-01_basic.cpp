#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0 ; i < n; i++){ 
        int x;
        cin >> x;
        v.push_back(x);
    }

    bool found = false;
    
    for (int i = 0; i < n; i++){// 여기 보면 내가 하나하나 다 확인하기에 브루트포스라고 함 
        if (v[i] == 10){
            found = true;
        }
    }

    if (found == true){
        cout << "yes";
    }
    else{
        cout << "no";
    }

    return 0;
}

// 이런 브루트포스는 입력 크기가 작을때 자주 쓴다.
// 가능한 후보를 전부 직접 검사하는 방식이다.

