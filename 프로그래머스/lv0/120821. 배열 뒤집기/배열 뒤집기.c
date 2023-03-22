#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*num_list_len); //answer 크기를 num_list_len만큼 동적할당
    int len = num_list_len-1; //배열의 길이는 0부터 시작,len변수 선언후 num_list_len으로 선언.
    for(int i=0; i<num_list_len;i++) //for문이용 반대부터 값넣기
    {
        answer[i]=num_list[len];
        len--;
    }
    return answer;
}