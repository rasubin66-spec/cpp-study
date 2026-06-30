#include <iostream>
using namespace std;

int main() {
    char d[20];
    
    scanf("%s", d); //%s는 문자열 %c는 문자 1개를 말하는 거다 즉 타입에 따라 대상이 다름 

    for (int i=0; d[i]!='\0' ;i++){
        printf("'%c'\n",d[i]);

    }

    return 0;




}