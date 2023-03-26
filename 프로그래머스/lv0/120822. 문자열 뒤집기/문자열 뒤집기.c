#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string); //my string길이 구해주기위해 len 선언, 그 후 ,strlen이용하여 길이 계산
    char* answer = (char*)malloc(len);
    //answer의 값을 len의 길이에 맞게 동적할당
    for(int i=0; i<len+1;i++) //for문을 이용하여 answer에 my_string값을 뒤에서부터 answer 값에 넣어준다
    {
        answer[i]=my_string[len-1-i];
    }
    return answer;
}