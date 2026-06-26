#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout << "size:" << numbers.size() << endl;

    for (int i = 0 ; i<numbers.size();i++){
        cout << numbers[i] << endl;
    }

    return 0;


}