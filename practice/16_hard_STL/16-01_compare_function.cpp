#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b){
    if(a.second==b.second){
        return a.first < b.first;
    }
    return a.second > b.second; // 이자체가 참 거짓을 비교하는 식이기때문에 return 값이 bool
}
//a의 점수가 b의 점수보다 크면 a를 앞에 둬라.
//sort(시작위치, 끝위치, 정렬기준);

int main(){
    vector<pair<string,int>> students;

    students.push_back({"Kim", 80});
    students.push_back({"Lee", 95});
    students.push_back({"Park", 70});

    sort(students.begin(), students.end(), cmp); // 여기서 cmp자리는 정렬기준이 정확히 뭔지를 알려주는 곳임 

    for (auto x : students){
        cout << x.first << " : " << x.second << endl; // for문 돌리는 동안만 쓰는게 가능한 퍼스트 세컨드
    }

    return 0;
}