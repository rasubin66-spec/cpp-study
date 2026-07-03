//vector를 통한 pair는 순차적으로 다돌아야함 0부터 시작해서

#include <iostream>
#include <map>
using namespace std;

int main() {

    map<string, int> score;

    score["Kim"] = 95;
    score["Kim"] = 20; // 이렇게 중간에 찾을 수도 있음 
    score["Lee"] = 88;
    score["Park"] = 100;

    cout << score["Kim"] << endl;
    cout << score["Park"] << endl;

    if (score.find("Kim") != score.end()){ // end()는 못찾앗다는 표시  즉 찾으면 해당키의 위치를 알려주고 못찾으면 end()를 돌려줘
        cout << "kim 있음" << endl;
    }

    else {
        cout << "Kim 없음 " << endl;
    }

    return 0;
}

//map은 key 기준으로 자동으로 정렬됨  
//즉 string key면 사전순 정렬, int key면 오름차순 정렬돼.
//그리고 아직 등록되지않은 키는 map에서는 자동으로 키 ---> 0으로 만든다.