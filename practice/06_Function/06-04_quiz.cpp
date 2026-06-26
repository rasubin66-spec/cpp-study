#include <iostream>
using namespace std;

int maxNumber(int a, int b){
    if (a>=b){
        return a;
    }

    else{
        return b;
    }

}

int main(){
    int x;
    int y;

    cin >> x;
    cin >> y;

    cout << "Bigger number: " << maxNumber(x,y)<<endl;

    return 0;

    
}