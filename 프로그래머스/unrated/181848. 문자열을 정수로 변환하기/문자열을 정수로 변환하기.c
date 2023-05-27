#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* n_str) {
      int num = 0;
    int sign = 1;
    int i = 0;

    // 음수 부호 처리
    if (n_str[0] == '-') {
        sign = -1;
        i++;
    }

    // 문자열을 정수로 변환
    while (n_str[i] != '\0') {
        num = num * 10 + (n_str[i] - '0');
        i++;
    }

    return num * sign;
}
