#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> numbers;
    int n ;
    int x ;
    int sum = 0 ;

    cin >> n;

    for (int i = 0; i<n; i++){
        cin >> x;
        numbers.push_back(x);
        

    }

    for (int i = 0; i<numbers.size(); i++){
        cout << numbers[i] <<endl;
    }

    for (int i = 0; i<numbers.size(); i++){
        sum += numbers[i];
    }
    cout << "sum: " << sum << endl;

    numbers.pop_back();

    cout << "after pop:"<< endl;
 
    for (int i = 0; i<numbers.size(); i++){
        cout << numbers[i] <<endl;
    }

    return 0;






}