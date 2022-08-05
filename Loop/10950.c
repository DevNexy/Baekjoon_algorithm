/*
문제
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 테스트 케이스의 개수 T가 주어진다.
각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

출력
각 테스트 케이스마다 A+B를 출력한다.
*/
#include <stdio.h>

int main()
{
    int t; //계산할 갯수
    scanf("%d",&t);

    int num1[t], num2[t];

    for(int i=0; i<t;i++){
        scanf("%d %d", &num1[i], &num2[i]);
    }
    for(int i=0; i<t; i++){
        printf("%d\n", num1[i]+num2[i]);
    }
    return 0;
}