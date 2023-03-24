#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*numbers_len); //(numbers_len의 길이) numbers의 배열 크기만큼 answer 동적 할당
    for(int i=0; i<numbers_len; i++) //배열의 길이만큼 반복한다
    {
        answer[i]=numbers[i]*2; //numbers 배열의 수를 2배 곱하여 answer의 안에 넣어준다.
    }
    return answer;
}