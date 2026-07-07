#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v = {1, 3, 5, 7, 9};

    bool found = binary_search(v.begin(), v.end(), 5); //

    cout << found << endl;
}

//binary_search(v.begin(), v.end(), 5);
//v.begin()부터 v.end() 전까지에서 5가 있냐?
// -v.begin()이 붙으면 인덱스가 출력됨 왜냐하면 원래 위치에서 처음 위치를 뺀거ㅣㄴ까