#include <iostream>
using namespace std;

int main(){
    int a;
    int b;

    scanf("%d.%d",&a,&b); //%d의 자리에 주소 a로 가서 값을 저장하고 b도 마찬가지 %d는 정수하나를 읽어라

    printf("%d\n%d\n",a,b); //%d에 해당하는 a를 가져옴 출력 후 줄바꿈 b출력 줄바꿈

    return 0;







    


}

//그리고 scanf 와 printf에서의 %d가 의미하는 부분은 미세하게 다름 즉 입력과 출력의 차이를 나타낸다. /n은 줄바꿈이고 