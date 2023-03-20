#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int height) 
{
    int answer=0;
    for(int i=0; i<array_len; i++)
        if(array[i]>height)//array의 i번째 수가 매개변수로 들어온 정수height보다 크다면
        {
            answer++; // 큰 사람 수만큼 +1
        }
    return answer;
    
}