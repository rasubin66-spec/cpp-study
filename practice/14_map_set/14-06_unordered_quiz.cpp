#include <iostream>
#include <set>
#include <map>
using namespace std;

int main() {
    set<string> check;
    map<string,string> check2;

    int n;
    cin >> n;

    for (int i = 0 ; i<n; i++){
        string st;
        cin >> st ;
        check.insert(st);
    }

    int m;
    cin >> m;

    for (int i = 0 ; i<m; i++){
        string st;
        cin >> st;
        if (check.find(st) != check.end()){ //없지 않으면 이라는 뜻
            cout << "Yes" <<endl;
        }
        else{
            cout << "No" << endl;
        }

    }

    return 0 ;

}
