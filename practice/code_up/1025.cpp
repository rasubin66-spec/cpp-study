#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,e;

    scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e); //%nd면 n번씩 끊어 읽으시겠다는 뜻 이다.

    cout << "["<< a*10000 <<"]"<< endl;
    cout << "["<< b*1000 <<"]"<< endl;
    cout << "["<< c*100 <<"]"<< endl;
    cout << "["<< d*10 <<"]"<< endl;
    cout << "["<< e <<"]"<< endl;

    return 0;

    


}