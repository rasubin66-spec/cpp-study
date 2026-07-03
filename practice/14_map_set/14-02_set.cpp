// set은 자동으로 오름차순 되어버리는 구조임 

#include <iostream>
#include <set>
using namespace std;

int main() {

    set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(10);
    s.insert(30);
    s.insert(20);

    for (int x : s) {
        cout << x << " ";
    }

    return 0;
}