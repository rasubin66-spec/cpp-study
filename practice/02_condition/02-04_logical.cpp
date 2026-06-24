// && (and) operator 
// || (or) operator 
// ! (not) operator 

#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    if (age >= 20 && age <= 29) {
        cout << "Twenties" << endl;
    }
    else{
        cout << "Not twenties" << endl;
    }

    return 0; 



}