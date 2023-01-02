/*
문제
그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다. 예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.
단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 단어의 개수 N이 들어온다. N은 100보다 작거나 같은 자연수이다. 둘째 줄부터 N개의 줄에 단어가 들어온다. 단어는 알파벳 소문자로만 되어있고 중복되지 않으며, 길이는 최대 100이다.

출력
첫째 줄에 그룹 단어의 개수를 출력한다.
*/
#include <stdio.h>
#include <string.h>
 
int main(){
    int N;
    scanf("%d", &N);
 
    int group_num = 0; //그룹 단어의 개수
    for(int i=0; i<N; i++){
        char word[101];
        scanf("%s", word);
 
        //그룹 단어인지 확인
        int alphabet[26]; //index 0 부터 a, b, ..
        for(int j=0; j<26; j++){
            alphabet[j] = 0;
        }
 
        int word_len = strlen(word);
        for(int k=0; k<word_len; k++){
            char letter = word[k];
            if(alphabet[letter-'a'] == 0){
                alphabet[letter-'a'] = 1;
            }
            else{ //이미 1이라면, 바로 앞 문자 확인
                if(word[k-1] != word[k]) //앞 문자와 다르다면, 그룹 단어가 아님
                    break;
            }
 
            if(k==word_len-1){ //여기까지 오면 그룹단어
                //printf("%s is a group word\n", word);
                group_num++;
            }
        }
    }
    printf("%d\n", group_num);
    return 0;
}
