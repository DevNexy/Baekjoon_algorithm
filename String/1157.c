/*
문제
알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.

입력
첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.

출력
첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h> //toupper() 사용

int main(){
    char word[1000001]; //null 문자 저장을 위해
    scanf("%s", word);

    int alphabet[26];
    for(int i =0; i<26;i++){
        alphabet[i] = 0;
    }
    int len = strlen(word); //for문에 넣으면 시간 초과
    for(int j=0; j<len;j++){
        char cur = toupper(word[j]); //모든 알파벳을 대문자로 변환
        alphabet[cur-'A']++;
    }

    int max = 0, num=0, max_alphabet =0;
    for(int k=0;k<26;k++){
        if(alphabet[k]>max){
            max=alphabet[k];
            num=1;
            max_alphabet='A'+k;
        }
        else if(max!=0&&alphabet[k]==max){
            num++;
        }
        else{
            continue;
        }
    }
    if(num==1){
        printf("%c\n", max_alphabet);
    }
    else{
        printf("?");
    }
    return 0;
}