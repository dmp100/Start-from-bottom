#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int num_list[], int length) {
    if (length >= 11) {
        int sum = 0;
        for (int i = 0; i < length; i++) {
            sum += num_list[i];
        }
        return sum;
    } else {
        int product = 1;
        for (int i = 0; i < length; i++) {
            product *= num_list[i];
        }
        return product;
    }
}





















// num_list_len은 배열 num_list의 길이입니다.
//int solution(int num_list[], size_t num_list_len) {
//    int answer = 0;
//    int plus=0;
//    int sum=0;
//    for(int i=0; i<=num_list_len;i++)
    
//    if(num_list_len>=11)
//        return  plus+=num_list[i];
        
//    else
//        return sum+=i*i;
//    return answer;
//