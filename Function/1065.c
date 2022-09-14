/*
문제
어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다. 등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 

입력
첫째 줄에 1,000보다 작거나 같은 자연수 N이 주어진다.

출력
첫째 줄에 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력한다.
*/

#include <stdio.h>
void hansoo(int n){
    if(n<100){ //100이하는 무조건 성립
        printf("%d", n);
    }
    else{
        int i;
        int cnt;
        int a,b,c; //a는 100의 자리 b는 10의자리 c는 1의자리

        cnt=99;
        for(i=100;i<=n;i++){
            a=i/100; //100의 자리
            b=i/10%10; //10의 자리
            c=i%10;//1의 자리

            if((c-b)==(b-a)){
                cnt++;
            }
        }
        printf("%d", cnt);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    hansoo(n);
    return 0;
}