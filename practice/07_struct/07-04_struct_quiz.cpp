#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    double score;
};

int main(){
    Student students[3];

    for (int i =  0 ; i<3 ; i++){
        cin >> students[i].name;
        cin >> students[i].age;
        cin >> students[i].score;
    }


    for (int i = 0; i<3; i++){
        cout << students[i].name <<endl;
        cout << students[i].age <<endl;
        cout << students[i].score <<endl;
    }

    return 0;

}