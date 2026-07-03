#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> cnt;

    cnt["apple"]++;
    cnt["banana"]++;
    cnt["apple"]++;

    cout << cnt["apple"] << endl;
    cout << cnt["banana"] << endl;

    return 0;


}

//unordered_map은 키 정렬안됨  map은 정렬하지만 그래도 순서 상관없고 빠른 찾기 할때 유리함 