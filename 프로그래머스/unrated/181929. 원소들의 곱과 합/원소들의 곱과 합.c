#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
int product = 1;  // 원소들의 곱을 저장할 변수
int total_sum = 0;  // 원소들의 합을 저장할 변수

    // 배열의 원소들을 순회하면서 곱과 합을 계산
    for (int i = 0; i < num_list_len; i++) {
        product *= num_list[i];
        total_sum += num_list[i];
    }

    // 곱이 합의 제곱보다 작은지 비교하여 결과 반환
    if (product < total_sum * total_sum) {
        return 1;
    } else {
        return 0;
    }
    
}