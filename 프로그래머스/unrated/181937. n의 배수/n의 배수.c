#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int n) {
    int answer = 0;
    if(num%n==0)
        return 1;
    else
        return 0;
    return answer;
}