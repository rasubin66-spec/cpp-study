#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {

    map<string, int> st;
    set<string> cnt;
    
    int n;
    cin >> n;

    for (int i = 0; i<n; i++){
        string word;
        cin >> word;
        st[word]+= 1;
        cnt.insert(word);
    }

    for (string s : cnt){
        cout << s << ":" << st[s] << endl;
    }

    return 0;
}

// st.first st.second로 각가 키와 벨류값을 포함할 수 있어 
// 그래서 굳이 셋 안쓰고 for (auto x : st){
//    cout << x.first << ":" << x.second << endl;
//} ---> 이런식으로 코드를 적을 수 도 있어

int main() {
    set<int> s;

    int n;
    cin >> n;

    for (int i = 0; i<n ; i++){
        int x ;
        cin >> x;
        s.insert(x);
    }

    for (auto x : s){
        cout << x ;
    }

    return 0;

}