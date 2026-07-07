#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student{
    string name;
    int score;
};

bool cmp(Student a, Student b){
    return a.score > b.score;
}
// 이 친구가 true false 역할을 함 

int main(){
    vector<Student>v = {
        {"A",90},
        {"B",80},
        {"C",70},
        {"D",60},
        {"E",50},
    };

    stable_sort(v.begin(),v.end(),cmp);

    for (auto s:v){
        cout << s.name << ' '<< s.score << endl;
    }
}


//first 기준 오름차순 first가 같으면 second기준 오름차순임 
// 저런 정렬알고리즘은 모든쌍을 비교해서 나아가는게 아님
// 정렬기준이 같아버리면 원래 입력순서를 유지하는 게 stable _sorted