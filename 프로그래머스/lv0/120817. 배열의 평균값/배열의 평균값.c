#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
double solution(int numbers[], size_t numbers_len) { //매개변수-int형으로 number[]배열, size_t=unsigined int
    double answer = 0; //answer 0으로 초기화 
    for(int i=0; i<numbers_len; i++) //int형으로 i 초기화, i를 0~numbers_len까지 증가시킨다
    {
        answer+=numbers[i]; // answer=answer+nubers[i];
        
    }
    answer /=(numbers_len); // answer=answer/numbers_int
    return answer;
}