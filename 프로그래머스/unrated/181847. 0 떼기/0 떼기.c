#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* n_str) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(100*sizeof(int));
    
        int length = strlen(n_str);
    int i;

    // 가장 왼쪽에 처음으로 등장하는 0 찾기
    for (i = 0; i < length; i++) {
        if (n_str[i] != '0') {
            break;
        }
    }

    // 0들을 떼어낸 문자열 생성
    int new_length = length - i;
    char* result = (char*)malloc((new_length + 1) * sizeof(char));
    strncpy(result, n_str + i, new_length);
    result[new_length] = '\0';

    return result;
}