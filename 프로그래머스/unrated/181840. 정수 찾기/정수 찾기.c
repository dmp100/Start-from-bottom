#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], int list_length, int n) {
    for (int i = 0; i < list_length; i++) {
        if (num_list[i] == n) {
            return 1;
        }
    }
    return 0;

}






// num_list_len은 배열 num_list의 길이입니다.
//int solution(int num_list[], size_t num_list_len, int n) {
//    int answer = 0;
    
//    for(int i=0;i<num_list;i++)
//    {
//        if(n)
//            return 1;
//        else(n!)
//            return 0;
//    }
//    
//    return answer;
//}