#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
  int answer = 0;                     //리턴값으로 쓸 정수
        for(int i=0; i<array_len; i++)   //0부터 매개변수로 들어온 array배열의 크기까지 for문 돌림
            if(array[i]==n) {               //만약 array의 i번째 수와 매개변수로 들어온 정수n과 같다면
                answer++;                   //answer에 +1
            }
        return answer;                      //answer를 리턴
    }
