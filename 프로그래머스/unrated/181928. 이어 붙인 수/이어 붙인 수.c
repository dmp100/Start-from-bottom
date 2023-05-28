#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], int size) {
    int odd_sum = 0;
    int even_sum = 0;
  
    for (int i = 0; i < size; i++) {
        if (num_list[i] % 2 == 0) {
            // 짝수인 경우 even_sum에 이어 붙임
            even_sum = even_sum * 10 + num_list[i];
        } else {
            // 홀수인 경우 odd_sum에 이어 붙임
            odd_sum = odd_sum * 10 + num_list[i];
        }
    }
  
    return odd_sum + even_sum;
}