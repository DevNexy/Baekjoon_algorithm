/*
문제
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

입력
입력은 여러 개의 테스트 케이스로 이루어져 있다.
각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
입력의 마지막에는 0 두 개가 들어온다.

출력
각 테스트 케이스마다 A+B를 출력한다.
*/
#include <stdio.h>

int main(){
    int a[100],b[100],c[100];
    for(int i=0;;i++){
        scanf("%d %d",&a[i],&b[i]);
        c[i]=a[i]+b[i];
        if(a[i]==0&&b[i]==0){
            break;
        }
    }
    for(int i=0;;i++){
        if(c[i]!=NULL&&c[i]!=0){
            printf("%d\n",c[i]);
        }
        else{
            break;
        }
    }

    return 0;
}