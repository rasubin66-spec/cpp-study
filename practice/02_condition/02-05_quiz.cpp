#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter age: " ;
    cin >> age;

    if (age < 0 ){ // 항상 위에서 아래 흐름으로 조건식을 검사하는 방식임 
        cout << "Invalid age" << endl;
    }
    else if (age < 13) { 
        cout << "Child" << endl;
    }
    else if (age < 20) { 
        cout << "Teenager" << endl;
    }
    else if (age < 30) { 
        cout << "Twenties" << endl;
    }
    else { 
        cout << "Adult" << endl;
    }



    return 0;
}
    